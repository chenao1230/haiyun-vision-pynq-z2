#include "serial_packets.h"
#include "serial_protocol.h"
#include "display_box.h"
#include <cstdarg>
#include <cstdio>
#include <stdexcept>
namespace {
std::string fmt(const char* f,...){char b[768];va_list a;va_start(a,f);int n=vsnprintf(b,sizeof(b),f,a);va_end(a);if(n<0||n>=(int)sizeof(b))throw std::runtime_error("packet_overflow");return b;}
}
std::string ship_frame_packet(const SequenceFrame& f,const std::string& run,const std::string& mode,const std::vector<YoloDetection>& ds,const std::vector<ByteTrackResult>& ts,const unsigned long long t[6]){
    std::string body="@SHIP1,"+fmt("BEGIN,%s,%s,%d,%s,%d,%d,%s\n",run.c_str(),f.sequence.c_str(),f.frame,f.source.c_str(),f.width,f.height,mode.c_str());
    for(size_t i=0;i<ds.size();++i){const YoloDetection& d=ds[i];body+="@SHIP1,"+fmt("D,%s,%s,%d,%u,%d,%.9f,%.6f,%.6f,%.6f,%.6f\n",run.c_str(),f.sequence.c_str(),f.frame,(unsigned)i,d.class_id,d.score,d.x1,d.y1,d.x2,d.y2);}
    for(size_t i=0;i<ts.size();++i){const ByteTrackResult& r=ts[i];YoloDetection d;if(!matched_display_box(r,ds,d))throw std::runtime_error("packet_display_index");body+="@SHIP1,"+fmt("T,%s,%s,%d,%d,%d,%.9f,%.6f,%.6f,%.6f,%.6f,%.6f,%.6f,%.6f,%.6f,%d\n",run.c_str(),f.sequence.c_str(),f.frame,r.id,r.cls,r.score,r.x1,r.y1,r.x2,r.y2,d.x1,d.y1,d.x2,d.y2,r.detection_index);}
    return body+"@SHIP1,"+fmt("END,%s,%s,%d,%u,%u,%llu,%llu,%llu,%llu,%llu,%llu,%s\n",run.c_str(),f.sequence.c_str(),f.frame,(unsigned)ds.size(),(unsigned)ts.size(),t[0],t[1],t[2],t[3],t[4],t[5],shipserial::hexcrc(body).c_str());
}
