#include "yolo_postprocess.h"
#include "ff.h"
#include <cstdio>
#include <cstring>
static bool put_line(FIL* f, const char* line) {
    UINT written=0;
    UINT length=static_cast<UINT>(std::strlen(line));
    return f_write(f,line,length,&written)==FR_OK && written==length;
}
bool yolo_write_csv(const char* path, const std::vector<YoloDetection>& result) {
    FIL file;
    if (f_open(&file,path,FA_CREATE_ALWAYS|FA_WRITE)!=FR_OK) return false;
    bool ok=put_line(&file,"frame_id,class_id,class_name,score,x1,y1,x2,y2\r\n");
    for (size_t i=0; ok && i<result.size(); ++i) {
        const YoloDetection& d=result[i];
        char line[256];
        int n=std::snprintf(line,sizeof(line),"0,%d,%s,%.9f,%.6f,%.6f,%.6f,%.6f\r\n",
                            d.class_id,yolo_class_name(d.class_id),double(d.score),
                            double(d.x1),double(d.y1),double(d.x2),double(d.y2));
        ok=n>0 && size_t(n)<sizeof(line) && put_line(&file,line);
    }
    if (ok) ok=f_sync(&file)==FR_OK;
    FRESULT close_result=f_close(&file);
    return ok && close_result==FR_OK;
}
