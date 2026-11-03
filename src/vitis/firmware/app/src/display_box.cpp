#include "display_box.h"
#include <cmath>
bool matched_display_box(const ByteTrackResult& t,const std::vector<YoloDetection>& ds,YoloDetection& out){
    if(t.detection_index<0||static_cast<size_t>(t.detection_index)>=ds.size())return false;
    const YoloDetection& d=ds[t.detection_index];
    if(t.cls!=d.class_id||!std::isfinite(t.score)||!std::isfinite(d.score)||std::fabs(t.score-d.score)>2e-6f)return false;
    if(!std::isfinite(d.x1)||!std::isfinite(d.y1)||!std::isfinite(d.x2)||!std::isfinite(d.y2)||d.x2<=d.x1||d.y2<=d.y1)return false;
    out=d;return true;
}
