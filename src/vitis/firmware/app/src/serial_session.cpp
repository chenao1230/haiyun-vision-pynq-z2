#include "debug.h"
#include "sequence_manifest.h"
#include "serial_session.h"
#include "board_uart.h"
#include "board_transport.h"
#include "serial_protocol.h"
#include "serial_packets.h"
#include "byte_tracker.h"
#include "display_box.h"
#include "xtime_l.h"
#include "sleep.h"
#include <stdexcept>
#include <cstdarg>
#include <cstdio>
#include <memory>
#include <cmath>
#include <cstdlib>
namespace {
const char* VERSION="SHIP_V4_ETHERNET_R7";
std::vector<SequenceFrame> frames;
std::string manifest_crc,active_run,active_group,state="BOOTING",fault_detail;
int active_frame=-1; bool stop_requested=false,got_ack=false;
unsigned long long us(XTime a,XTime b){return ((b-a)*1000000ULL)/COUNTS_PER_SECOND;}
bool unsigned_number(const std::string& s,unsigned long& value){
    if(s.empty()||s.size()>10)return false;char* end=0;value=std::strtoul(s.c_str(),&end,10);return end&&*end=='\0';
}
bool hex_number(const std::string& s,unsigned long& value){
    if(s.size()!=8)return false;char* end=0;value=std::strtoul(s.c_str(),&end,16);return end&&*end=='\0';
}
std::string format(const char* fmt,...){char b[768];va_list ap;va_start(ap,fmt);int n=vsnprintf(b,sizeof(b),fmt,ap);va_end(ap);if(n<0||n>=(int)sizeof(b))throw std::runtime_error("message_overflow");return b;}
void send(const std::string& s){ship_transport_send(s);}
void msg(const std::string& body){send("@SHIP1,"+body+"\n");}
void hello(){
    msg(format("HELLO,%s,115200,%s,%s,%u",VERSION,state.c_str(),manifest_crc.c_str(),(unsigned)frames.size()));
    if(state=="FAULT"&&!fault_detail.empty())msg("FAULT_DETAIL,"+fault_detail);
}
void groups(){
    for(size_t i=0;i<frames.size();){size_t j=i+1;while(j<frames.size()&&frames[j].sequence==frames[i].sequence)++j;msg(format("GROUP,%s,%u",frames[i].sequence.c_str(),(unsigned)(j-i)));i=j;}
    msg("LIST_END");
}
bool receive(std::string& line){return ship_transport_receive_line(line);}
void busy_commands(){
    std::string line;
    while(receive(line)){
        std::vector<std::string> a=shipserial::split(line);
        if(a[0]=="ACK"&&a.size()==4&&a[1]==active_run&&a[2]==active_group&&a[3]==format("%d",active_frame)){got_ack=true;}
        else if(a[0]=="STOP"&&a.size()==2&&a[1]==active_run){stop_requested=true;msg("STOP_ACCEPTED,"+active_run);}
        else if(a[0]=="HELLO"&&a.size()==1)hello();
        else if(a[0]=="STATUS"&&a.size()==1)msg("STATUS,"+state+","+active_run+","+active_group+","+format("%d",active_frame));
        else msg("NACK,BUSY_OR_STALE");
    }
}
struct File {
    FIL f; bool opened;
    explicit File(const std::string& path):opened(false){if(f_open(&f,path.c_str(),FA_CREATE_ALWAYS|FA_WRITE)!=FR_OK)throw std::runtime_error("result_open");opened=true;}
    void put(const std::string& s){UINT w=0;if(f_write(&f,s.data(),s.size(),&w)!=FR_OK||w!=s.size())throw std::runtime_error("result_write");}
    void sync(){if(f_sync(&f)!=FR_OK)throw std::runtime_error("result_sync");}
    void close(){if(opened){opened=false;if(f_close(&f)!=FR_OK)throw std::runtime_error("result_close");}}
    ~File(){if(opened)f_close(&f);}
};
void mkdir_checked(const std::string& path){FRESULT r=f_mkdir(path.c_str());if(r!=FR_OK&&r!=FR_EXIST)throw std::runtime_error("result_directory");}
void load_manifest(){
    FILINFO inf;if(f_stat("manifest.csv",&inf)!=FR_OK||inf.fsize==0||inf.fsize>262144)throw std::runtime_error("manifest_missing_or_size");
    FIL f;if(f_open(&f,"manifest.csv",FA_READ)!=FR_OK)throw std::runtime_error("manifest_open");
    std::string s(inf.fsize,'\0');UINT n=0;FRESULT r=f_read(&f,&s[0],s.size(),&n);FRESULT c=f_close(&f);
    if(r!=FR_OK||n!=s.size()||c!=FR_OK)throw std::runtime_error("manifest_read");
    std::string err;if(!parse_sequence_manifest(s,frames,err))throw std::runtime_error("manifest_invalid");
    manifest_crc=shipserial::hexcrc(s);
    for(size_t i=0;i<frames.size();++i){
        if(!shipserial::safe_id(frames[i].sequence,16))throw std::runtime_error("group_id_max16");
        if(f_stat(frames[i].path.c_str(),&inf)!=FR_OK||inf.fsize!=2076672)throw std::runtime_error("input_missing_or_size");
    }
}
bool transmit_frame(const std::string& packet){
    got_ack=false;
    for(int attempt=0;attempt<3;++attempt){
        busy_commands();send(packet);XTime start,now;XTime_GetTime(&start);
        while(!got_ack){busy_commands();if(got_ack)break;XTime_GetTime(&now);if(us(start,now)>5000000ULL)break;usleep(1000);}
        if(got_ack)return true;
    }
    msg("ERROR,"+active_run+",ACK_TIMEOUT");return false;
}
void run_group(Yolo4_Tiny* model,std::vector<data_t>& input,std::vector<data_t>& o0,std::vector<data_t>& o1,const std::string& mode,const std::string& group){
    active_frame=-1;active_group.clear();stop_requested=false;state="RUNNING";
    std::string root="results/"+active_run;mkdir_checked("results");mkdir_checked(root);
    File done(root+"/STATE.TXT");done.put("STATUS=RUNNING\nVERSION="+std::string(VERSION)+"\nMODE="+mode+"\n");done.sync();done.close();
    File wire(root+"/WIRE.TXT"),dsfile(root+"/detections.csv"),tsfile(root+"/tracks.csv"),times(root+"/frames.csv");
    dsfile.put("sequence_id,frame_id,source_image,detection_index,class_id,score,x1,y1,x2,y2\n");
    tsfile.put("sequence_id,frame_id,source_image,track_id,class_id,score,x1,y1,x2,y2,detection_index,display_x1,display_y1,display_x2,display_y2\n");
    times.put("sequence_id,frame_id,detections,tracks,read_us,inference_us,decode_nms_us,tracker_us,sd_csv_us,compute_us\n");
    ArmByteTracker tracker;std::string previous;unsigned count=0;bool delivered=true;
    msg("STARTED,"+active_run+","+mode+","+group);
    for(size_t k=0;k<frames.size();++k){
        const SequenceFrame& f=frames[k];if(group!="ALL"&&f.sequence!=group)continue;
        busy_commands();if(stop_requested)break;
        if(previous!=f.sequence){tracker.reset();previous=f.sequence;}
        active_group=f.sequence;active_frame=f.frame;
        XTime t0,t1,t2,t3,t4,t5,t6;XTime_GetTime(&t0);
        read_params(f.path,input.data(),input.size());XTime_GetTime(&t1);
        Xil_DCacheFlush();model->forward(input.data(),o0.data(),o1.data());
        Xil_DCacheInvalidateRange((u32)((unsigned int)o0.data()&0xffffffe0),32*((o0.size()*sizeof(data_t))/32+2));
        Xil_DCacheInvalidateRange((u32)((unsigned int)o1.data()&0xffffffe0),32*((o1.size()*sizeof(data_t))/32+2));XTime_GetTime(&t2);
        std::vector<YoloDetection> ds;YoloPostConfig cfg={f.width,f.height,.1f,.3f};
        if(!yolo_decode_nms(o0.data(),o0.size(),o1.data(),o1.size(),cfg,ds))throw std::runtime_error("decode_failed");XTime_GetTime(&t3);
        if(ds.size()>256)throw std::runtime_error("detection_resource_cap");
        std::vector<ByteTrackResult> ts;if(mode=="TRACK"&&!tracker.update(ds,ts))throw std::runtime_error("tracker_failed");XTime_GetTime(&t4);
        for(size_t i=0;i<ds.size();++i){const YoloDetection& d=ds[i];
            std::string row=format("%s,%d,%s,%u,%d,%.9f,%.6f,%.6f,%.6f,%.6f\n",f.sequence.c_str(),f.frame,f.source.c_str(),(unsigned)i,d.class_id,d.score,d.x1,d.y1,d.x2,d.y2);dsfile.put(row);
        }
        for(size_t i=0;i<ts.size();++i){const ByteTrackResult& t=ts[i];YoloDetection d;if(!matched_display_box(t,ds,d))throw std::runtime_error("display_box_failed");
            tsfile.put(format("%s,%d,%s,%d,%d,%.9f,%.6f,%.6f,%.6f,%.6f,%d,%.6f,%.6f,%.6f,%.6f\n",f.sequence.c_str(),f.frame,f.source.c_str(),t.id,t.cls,t.score,t.x1,t.y1,t.x2,t.y2,t.detection_index,d.x1,d.y1,d.x2,d.y2));
        }
        dsfile.sync();tsfile.sync();XTime_GetTime(&t5);
        times.put(format("%s,%d,%u,%u,%llu,%llu,%llu,%llu,%llu,%llu\n",f.sequence.c_str(),f.frame,(unsigned)ds.size(),(unsigned)ts.size(),us(t0,t1),us(t1,t2),us(t2,t3),us(t3,t4),us(t4,t5),us(t0,t4)));times.sync();XTime_GetTime(&t6);
        const unsigned long long dt[6]={us(t0,t1),us(t1,t2),us(t2,t3),us(t3,t4),us(t4,t5),us(t0,t4)};
        std::string packet=ship_frame_packet(f,active_run,mode,ds,ts,dt);
        wire.put(packet);wire.sync();++count;
        if(!transmit_frame(packet)){delivered=false;break;}
    }
    dsfile.close();tsfile.close();times.close();wire.close();
    std::string status=!delivered?"COMM_ERROR":stop_requested?"STOPPED":"SUCCESS";
    File final_state(root+"/DONE.TXT");final_state.put("VERSION="+std::string(VERSION)+"\nMODE="+mode+"\nSTATUS="+status+"\nFRAMES="+format("%u",count)+"\n");final_state.close();
    msg(format("DONE,%s,%s,%u",active_run.c_str(),status.c_str(),count));state="READY";
}
void run_uploaded_image(Yolo4_Tiny* model,std::vector<data_t>& input,std::vector<data_t>& o0,std::vector<data_t>& o1,
                        std::vector<unsigned char>& upload,int width,int height,unsigned long expected_crc){
    const size_t bytes=upload.size();state="RECEIVING";active_group="PCUPLOAD";active_frame=0;
    if(!ship_transport_begin_binary(upload.data(),bytes))throw std::runtime_error("upload_begin_failed");
    msg(format("UPLOAD_READY,%s,%u",active_run.c_str(),(unsigned)bytes));
    XTime receive_start,now;XTime_GetTime(&receive_start);
    while(!ship_transport_binary_done()){
        if(ship_transport_binary_failed()){ship_transport_end_binary();throw std::runtime_error("upload_connection_lost");}
        XTime_GetTime(&now);if(us(receive_start,now)>15000000ULL){ship_transport_end_binary();throw std::runtime_error("upload_timeout");}
    }
    XTime_GetTime(&now);unsigned long long receive_time=us(receive_start,now);
    if(shipserial::crc32(upload.data(),bytes)!=(uint32_t)expected_crc){ship_transport_end_binary();throw std::runtime_error("upload_crc_mismatch");}
    ship_transport_end_binary();
    for(size_t i=0;i<upload.size();++i)input[i]=(data_t)(((unsigned)upload[i]*SCALE+127U)/255U);
    msg(format("UPLOAD_RECEIVED,%s,%llu",active_run.c_str(),receive_time));state="RUNNING";
    XTime t1,t2,t3;XTime_GetTime(&t1);Xil_DCacheFlush();model->forward(input.data(),o0.data(),o1.data());
    Xil_DCacheInvalidateRange((u32)((unsigned int)o0.data()&0xffffffe0),32*((o0.size()*sizeof(data_t))/32+2));
    Xil_DCacheInvalidateRange((u32)((unsigned int)o1.data()&0xffffffe0),32*((o1.size()*sizeof(data_t))/32+2));XTime_GetTime(&t2);
    std::vector<YoloDetection> ds;YoloPostConfig cfg={width,height,.1f,.3f};
    if(!yolo_decode_nms(o0.data(),o0.size(),o1.data(),o1.size(),cfg,ds))throw std::runtime_error("decode_failed");XTime_GetTime(&t3);
    if(ds.size()>256)throw std::runtime_error("detection_resource_cap");
    SequenceFrame f;f.sequence="PCUPLOAD";f.source="PC_"+active_run+".png";f.original=f.source;f.timestamp="";f.path="";f.frame=0;f.width=width;f.height=height;
    std::vector<ByteTrackResult> tracks;const unsigned long long dt[6]={receive_time,us(t1,t2),us(t2,t3),0,0,us(t1,t3)};
    std::string packet=ship_frame_packet(f,active_run,"DET",ds,tracks,dt);
    bool delivered=transmit_frame(packet);msg(format("DONE,%s,%s,1",active_run.c_str(),delivered?"SUCCESS":"COMM_ERROR"));state="READY";
}
bool run_uploaded_frame(Yolo4_Tiny* model,std::vector<data_t>& input,std::vector<data_t>& o0,std::vector<data_t>& o1,
                        std::vector<unsigned char>& upload,ArmByteTracker& tracker,const std::string& mode,
                        const std::string& sequence,int frame,int width,int height,unsigned long expected_crc){
    const size_t bytes=upload.size();state="RECEIVING";active_group=sequence;active_frame=frame;
    if(!ship_transport_begin_binary(upload.data(),bytes))throw std::runtime_error("upload_begin_failed");
    msg(format("UPFRAME_READY,%s,%u",active_run.c_str(),(unsigned)bytes));
    XTime receive_start,now;XTime_GetTime(&receive_start);
    while(!ship_transport_binary_done()){
        if(ship_transport_binary_failed()){ship_transport_end_binary();throw std::runtime_error("upload_connection_lost");}
        XTime_GetTime(&now);if(us(receive_start,now)>15000000ULL){ship_transport_end_binary();throw std::runtime_error("upload_timeout");}
    }
    XTime_GetTime(&now);unsigned long long receive_time=us(receive_start,now);
    if(shipserial::crc32(upload.data(),bytes)!=(uint32_t)expected_crc){ship_transport_end_binary();throw std::runtime_error("upload_crc_mismatch");}
    ship_transport_end_binary();
    for(size_t i=0;i<upload.size();++i)input[i]=(data_t)(((unsigned)upload[i]*SCALE+127U)/255U);
    msg(format("UPLOAD_RECEIVED,%s,%llu",active_run.c_str(),receive_time));state="RUNNING";
    XTime t1,t2,t3,t4;XTime_GetTime(&t1);Xil_DCacheFlush();model->forward(input.data(),o0.data(),o1.data());
    Xil_DCacheInvalidateRange((u32)((unsigned int)o0.data()&0xffffffe0),32*((o0.size()*sizeof(data_t))/32+2));
    Xil_DCacheInvalidateRange((u32)((unsigned int)o1.data()&0xffffffe0),32*((o1.size()*sizeof(data_t))/32+2));XTime_GetTime(&t2);
    std::vector<YoloDetection> ds;YoloPostConfig cfg={width,height,.1f,.3f};
    if(!yolo_decode_nms(o0.data(),o0.size(),o1.data(),o1.size(),cfg,ds))throw std::runtime_error("decode_failed");XTime_GetTime(&t3);
    if(ds.size()>256)throw std::runtime_error("detection_resource_cap");
    std::vector<ByteTrackResult> tracks;
    if(mode=="TRACK"&&!tracker.update(ds,tracks))throw std::runtime_error("tracker_failed");XTime_GetTime(&t4);
    SequenceFrame f;f.sequence=sequence;f.source="PC_"+active_run+"_"+format("%04d",frame)+".png";f.original=f.source;
    f.timestamp="";f.path="";f.frame=frame;f.width=width;f.height=height;
    const unsigned long long dt[6]={receive_time,us(t1,t2),us(t2,t3),us(t3,t4),0,us(t1,t4)};
    bool delivered=transmit_frame(ship_frame_packet(f,active_run,mode,ds,tracks,dt));state="BATCH";return delivered;
}
}
int run_serial_session(){
    Xil_DCacheDisable();ship_uart_init();
    if(!ship_transport_init())return -1;
    sleep(3);
    Yolo4_Tiny* model=0;std::vector<data_t> input,o0,o1;std::vector<unsigned char> upload(3*416*416);
    ArmByteTracker upload_tracker;std::string batch_group,batch_mode;unsigned long batch_expected=0,batch_received=0;
    try{
        msg("BOOT,"+std::string(VERSION));
        if(SD_Init()!=XST_SUCCESS)throw std::runtime_error("SD_mount_failed");
        load_manifest();msg("STATE,LOADING_WEIGHTS");conv_init();model=new Yolo4_Tiny();model->load_weight("folded_weights");
        input.resize(3*416*416);o0.resize(OUT_CH*13*13);o1.resize(OUT_CH*26*26);
        state="READY";hello();groups();
    }catch(const std::exception& e){
        fault_detail=e.what();state="FAULT";
        diag_log("STARTUP FAULT %s",fault_detail.c_str());
        msg("FAULT,"+fault_detail);
    }
    for(;;){
        std::string line;if(!receive(line)){usleep(1000);continue;}
        std::vector<std::string> a=shipserial::split(line);
        if(a.size()==1&&a[0]=="HELLO"){hello();if(state=="READY")groups();}
        else if(a.size()==1&&a[0]=="STATUS")msg("STATUS,"+state+","+active_run+","+active_group+","+format("%d",active_frame));
        else if(a.size()==4&&a[0]=="RUN"){
            if(state!="READY"){msg("NACK,NOT_READY");continue;}
            if(!shipserial::safe_id(a[1],12)||!shipserial::safe_id(a[3],16)||(a[2]!="DET"&&a[2]!="TRACK")){msg("NACK,INVALID_RUN");continue;}
            bool exists=a[3]=="ALL";for(size_t i=0;i<frames.size();++i)exists=exists||frames[i].sequence==a[3];
            if(!exists){msg("NACK,UNKNOWN_GROUP");continue;}
            FILINFO inf;std::string path="results/"+a[1];if(f_stat(path.c_str(),&inf)==FR_OK){msg("NACK,RUN_ID_EXISTS");continue;}
            active_run=a[1];
            try{run_group(model,input,o0,o1,a[2],a[3]);}
            catch(const std::exception& e){state="FAULT";msg("ERROR,"+active_run+","+std::string(e.what()));msg("FAULT,RESET_REQUIRED");}
        }else if(a.size()==5&&a[0]=="BATCH"){
            unsigned long count=0;
            if(state!="READY"){msg("NACK,NOT_READY");continue;}
            if(!shipserial::safe_id(a[1],12)||(a[2]!="DET"&&a[2]!="TRACK")||!shipserial::safe_id(a[3],16)||
               !unsigned_number(a[4],count)||count<1||count>10000){msg("NACK,INVALID_BATCH");continue;}
            active_run=a[1];batch_mode=a[2];batch_group=a[3];batch_expected=count;batch_received=0;active_group=batch_group;active_frame=-1;
            upload_tracker.reset();stop_requested=false;state="BATCH";
            msg("STARTED,"+active_run+","+batch_mode+","+batch_group);
            msg(format("BATCH_READY,%s,%s,%u",active_run.c_str(),batch_group.c_str(),(unsigned)batch_expected));
        }else if(a.size()==7&&a[0]=="UPFRAME"){
            unsigned long frame=0,width=0,height=0,bytes=0,crc=0;
            if(state!="BATCH"||a[1]!=active_run){msg("NACK,BATCH_NOT_READY");continue;}
            if(!unsigned_number(a[2],frame)||!unsigned_number(a[3],width)||!unsigned_number(a[4],height)||
               !unsigned_number(a[5],bytes)||!hex_number(a[6],crc)||frame!=batch_received||batch_received>=batch_expected||
               width<1||width>16384||height<1||height>16384||bytes!=upload.size()){
                msg("NACK,INVALID_UPFRAME");continue;
            }
            try{
                if(!run_uploaded_frame(model,input,o0,o1,upload,upload_tracker,batch_mode,batch_group,(int)frame,(int)width,(int)height,crc)){
                    msg(format("DONE,%s,COMM_ERROR,%u",active_run.c_str(),(unsigned)batch_received));state="READY";
                }else{
                    ++batch_received;msg(format("UPFRAME_DONE,%s,%u",active_run.c_str(),(unsigned)frame));
                }
            }catch(const std::exception& e){ship_transport_end_binary();state="READY";msg("NACK,UPLOAD_FAILED,"+std::string(e.what()));}
        }else if(a.size()==2&&a[0]=="STOP"&&state=="BATCH"&&a[1]==active_run){
            msg(format("DONE,%s,STOPPED,%u",active_run.c_str(),(unsigned)batch_received));state="READY";
            batch_group.clear();batch_mode.clear();batch_expected=batch_received=0;
        }else if(a.size()==2&&a[0]=="BATCH_END"){
            if(state!="BATCH"||a[1]!=active_run){msg("NACK,BATCH_NOT_READY");continue;}
            if(batch_received!=batch_expected){msg("NACK,BATCH_INCOMPLETE");continue;}
            msg(format("DONE,%s,SUCCESS,%u",active_run.c_str(),(unsigned)batch_received));state="READY";
            batch_group.clear();batch_mode.clear();batch_expected=batch_received=0;
        }else if(a.size()==7&&a[0]=="UPLOAD"){
            unsigned long width=0,height=0,bytes=0,crc=0;
            if(state!="READY"){msg("NACK,NOT_READY");continue;}
            if(!shipserial::safe_id(a[1],12)||a[2]!="DET"||!unsigned_number(a[3],width)||!unsigned_number(a[4],height)||
               !unsigned_number(a[5],bytes)||!hex_number(a[6],crc)||width<1||width>16384||height<1||height>16384||bytes!=upload.size()){
                msg("NACK,INVALID_UPLOAD");continue;
            }
            active_run=a[1];
            try{run_uploaded_image(model,input,o0,o1,upload,(int)width,(int)height,crc);}
            catch(const std::exception& e){ship_transport_end_binary();state="READY";msg("NACK,UPLOAD_FAILED,"+std::string(e.what()));}
        }else if(a[0]=="ACK"){} // Ignore late duplicate ACK after the last frame.
        else msg("NACK,INVALID_COMMAND_OR_IDLE");
    }
}
