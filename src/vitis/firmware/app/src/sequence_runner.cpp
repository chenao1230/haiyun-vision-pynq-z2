#include "debug.h"
#include "sequence_manifest.h"
#include "byte_tracker.h"
#include "display_box.h"
#include "xtime_l.h"
#include <cstring>
#include <cstdarg>
#include <memory>
namespace {
void fail(const char* msg){diag_log("SEQUENCE ERROR %s",msg);xil_printf("SEQUENCE ERROR %s\r\n",msg);exit(EXIT_FAILURE);}
void directory(const std::string& p){FRESULT r=f_mkdir(p.c_str());if(r!=FR_OK&&r!=FR_EXIST)fail("mkdir");}
struct Csv {
    FIL f;bool opened;
    explicit Csv(const char* path):opened(false){if(f_open(&f,path,FA_CREATE_ALWAYS|FA_WRITE)!=FR_OK)fail(path);opened=true;}
    void put(const char* format,...){char b[640];va_list a;va_start(a,format);int n=vsnprintf(b,sizeof(b),format,a);va_end(a);
        if(n<0||n>=(int)sizeof(b))fail("CSV line too long");UINT w=0;if(f_write(&f,b,n,&w)!=FR_OK||w!=(UINT)n)fail("CSV write/short write");}
    void sync(){if(f_sync(&f)!=FR_OK)fail("CSV sync");}
    void close(){if(opened){if(f_close(&f)!=FR_OK)fail("CSV close");opened=false;}}
    ~Csv(){close();}
};
unsigned long long micros(XTime a,XTime b){return ((b-a)*1000000ULL)/COUNTS_PER_SECOND;}
}
bool run_sd_sequence_if_present(const std::string& weights){
    FILINFO info;FRESULT r=f_stat("manifest.csv",&info);
    if(r==FR_NO_FILE)return false;
    if(r!=FR_OK||info.fsize==0||info.fsize>262144)fail("manifest stat/size");
    diag_log("=== ARM BYTETRACK SEQUENCE v3_class10 20261024 ===");
    directory("results");
    // Invalidate a previous completion marker BEFORE validating new input.
    r=f_unlink("results/DONE.TXT");if(r!=FR_OK&&r!=FR_NO_FILE)fail("remove previous DONE marker");
    FIL manifest;if(f_open(&manifest,"manifest.csv",FA_READ)!=FR_OK)fail("manifest open");
    std::string text(info.fsize,'\0');UINT read=0;
    if(f_read(&manifest,&text[0],text.size(),&read)!=FR_OK||read!=text.size())fail("manifest read");
    if(f_close(&manifest)!=FR_OK)fail("manifest close");
    std::vector<SequenceFrame> frames;std::string error;
    if(!parse_sequence_manifest(text,frames,error))fail(error.c_str());
    for(size_t i=0;i<frames.size();++i){
        if(f_stat(frames[i].path.c_str(),&info)!=FR_OK||info.fsize!=2076672)fail(frames[i].path.c_str());
        directory("results/"+frames[i].sequence);
    }
    diag_log("PREFLIGHT OK frames=%u",(unsigned)frames.size());
    static_assert(sizeof(data_t)==2&&SCALE==512&&OUT_CH==33,"Q9 output contract");
    std::vector<data_t> input(3*416*416),out0(OUT_CH*13*13),out1(OUT_CH*26*26);
    conv_init();Yolo4_Tiny* model=new Yolo4_Tiny();model->load_weight(weights);
    diag_log("SEQUENCE WEIGHTS LOADED ONCE");
    Csv detections("results/detections.csv"),tracks("results/tracks.csv"),timings("results/frames.csv");
    detections.put("sequence_id,frame_id,source_image,detection_index,class_id,class_name,score,x1,y1,x2,y2\n");
    tracks.put("sequence_id,frame_id,source_image,track_id,class_id,class_name,score,x1,y1,x2,y2,detection_index,display_x1,display_y1,display_x2,display_y2,display_box_source\n");
    timings.put("sequence_id,frame_id,detections,tracks,read_us,inference_us,decode_nms_us,tracker_us,frame_us\n");
    diag_log("TRACKER class_mismatch_penalty=0.1 q_aspect_std=0.05 r_aspect_std=0.1 display=matched_detection");
    ArmByteTracker tracker;std::string previous;
    for(size_t k=0;k<frames.size();++k){const SequenceFrame& f=frames[k];
        if(previous!=f.sequence){tracker.reset();previous=f.sequence;diag_log("TRACKER RESET sequence=%s",f.sequence.c_str());}
        diag_log("FRAME BEGIN %s %d (%u/%u)",f.sequence.c_str(),f.frame,(unsigned)k+1,(unsigned)frames.size());
        XTime t0,t1,t2,t3,t4,t5;XTime_GetTime(&t0);
        read_params(f.path,input.data(),input.size());XTime_GetTime(&t1);
        Xil_DCacheFlush();model->forward(input.data(),out0.data(),out1.data());
        Xil_DCacheInvalidateRange((u32)((unsigned int)out0.data()&0xffffffe0),32*((out0.size()*sizeof(data_t))/32+2));
        Xil_DCacheInvalidateRange((u32)((unsigned int)out1.data()&0xffffffe0),32*((out1.size()*sizeof(data_t))/32+2));
        XTime_GetTime(&t2);
        YoloPostConfig cfg={f.width,f.height,.1f,.3f};std::vector<YoloDetection> ds;
        if(!yolo_decode_nms(out0.data(),out0.size(),out1.data(),out1.size(),cfg,ds))fail("decode/NMS");
        XTime_GetTime(&t3);std::vector<ByteTrackResult> ts;
        if(!tracker.update(ds,ts))fail("tracker invalid input/numerics or 256 resource cap");XTime_GetTime(&t4);
        char path[160];snprintf(path,sizeof(path),"results/%s/%06d_o0.bin",f.sequence.c_str(),f.frame);write_data(path,out0.data(),out0.size());
        snprintf(path,sizeof(path),"results/%s/%06d_o1.bin",f.sequence.c_str(),f.frame);write_data(path,out1.data(),out1.size());
        for(size_t i=0;i<ds.size();++i){const YoloDetection& d=ds[i];detections.put("%s,%d,%s,%u,%d,%s,%.9f,%.6f,%.6f,%.6f,%.6f\n",f.sequence.c_str(),f.frame,f.source.c_str(),(unsigned)i,d.class_id,yolo_class_name(d.class_id),d.score,d.x1,d.y1,d.x2,d.y2);}
        for(size_t i=0;i<ts.size();++i){
            const ByteTrackResult& t=ts[i];YoloDetection display;
            if(!matched_display_box(t,ds,display))fail("invalid display detection association");
            // x1..y2 preserve Kalman state for diagnostics; display_* is the matched detection.
            tracks.put("%s,%d,%s,%d,%d,%s,%.9f,%.6f,%.6f,%.6f,%.6f,%d,%.6f,%.6f,%.6f,%.6f,matched_detection\n",
                f.sequence.c_str(),f.frame,f.source.c_str(),t.id,t.cls,yolo_class_name(t.cls),t.score,
                t.x1,t.y1,t.x2,t.y2,t.detection_index,display.x1,display.y1,display.x2,display.y2);
        }
        detections.sync();tracks.sync();XTime_GetTime(&t5);
        timings.put("%s,%d,%u,%u,%llu,%llu,%llu,%llu,%llu\n",f.sequence.c_str(),f.frame,(unsigned)ds.size(),(unsigned)ts.size(),micros(t0,t1),micros(t1,t2),micros(t2,t3),micros(t3,t4),micros(t0,t5));timings.sync();
        diag_log("FRAME OK %s %d det=%u tracks=%u infer_us=%llu track_us=%llu",f.sequence.c_str(),f.frame,(unsigned)ds.size(),(unsigned)ts.size(),micros(t1,t2),micros(t3,t4));
    }
    detections.close();tracks.close();timings.close();
    Csv done("results/DONE.TXT");done.put("ARM_BYTETRACK_V3_CLASS10_20261024\nSTATUS=SUCCESS\nFRAMES=%u\nAll result CSV files closed successfully.\n",(unsigned)frames.size());done.sync();done.close();
    diag_log("SEQUENCE DONE frames=%u: CSV and DONE.TXT closed successfully",(unsigned)frames.size());
    xil_printf("SEQUENCE DONE: %u frames, results/DONE.TXT saved\r\n",(unsigned)frames.size());
    return true;
}
