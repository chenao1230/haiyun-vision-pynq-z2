#include "yolo_postprocess.h"
#include <algorithm>
#include <cmath>

static const float anchors[6][2] = {{10,14},{23,27},{37,58},{81,82},{135,169},{344,319}};
static const char* names[6] = {"bulk cargo carrier", "fishing boat", "general cargo ship",
                              "ore carrier", "passenger ship", "container ship"};
const char* yolo_class_name(int id) { return (id >= 0 && id < 6) ? names[id] : "invalid"; }
static float sigmoid(float x) { return 1.0f / (1.0f + std::exp(-x)); }
static double iou(const YoloDetection& a, const YoloDetection& b) {
    double w = std::max(0.0, double(std::min(a.x2,b.x2)) - std::max(a.x1,b.x1));
    double h = std::max(0.0, double(std::min(a.y2,b.y2)) - std::max(a.y1,b.y1));
    double aa = std::max(0.0, double(a.x2)-a.x1) * std::max(0.0, double(a.y2)-a.y1);
    double ab = std::max(0.0, double(b.x2)-b.x1) * std::max(0.0, double(b.y2)-b.y1);
    return w*h / std::max(1e-12, aa+ab-w*h);
}
static bool decode_head(const int16_t* raw, int grid, const int* mask, int offset,
                        const YoloPostConfig& cfg, std::vector<YoloDetection>& candidates) {
    int plane = grid*grid;
    for (int a=0; a<3; ++a) for (int y=0; y<grid; ++y) for (int x=0; x<grid; ++x) {
        int cell = y*grid+x;
        const int16_t* p = raw + a*11*plane + cell;
        float objectness = sigmoid(p[4*plane]/512.0f);
        int cls = 0;
        for (int c=1; c<6; ++c) if (p[(5+c)*plane] > p[(5+cls)*plane]) cls=c;
        float score = objectness * sigmoid(p[(5+cls)*plane]/512.0f);
        if (score < cfg.score_threshold) continue;
        // Double coordinate accumulation matches NumPy's grid promotion closely.
        double cx = (sigmoid(p[0]/512.0f)+double(x))/grid;
        double cy = (sigmoid(p[plane]/512.0f)+double(y))/grid;
        float w = std::exp(p[2*plane]/512.0f)*anchors[mask[a]][0]/416.0f;
        float h = std::exp(p[3*plane]/512.0f)*anchors[mask[a]][1]/416.0f;
        YoloDetection d;
        d.x1 = float((cx-w/2.0f)*cfg.image_width);
        d.y1 = float((cy-h/2.0f)*cfg.image_height);
        d.x2 = float((cx+w/2.0f)*cfg.image_width);
        d.y2 = float((cy+h/2.0f)*cfg.image_height);
        d.score=score; d.class_id=cls; d.candidate_id=offset+a*plane+cell;
        if (!std::isfinite(d.x1) || !std::isfinite(d.y1) || !std::isfinite(d.x2) || !std::isfinite(d.y2)) return false;
        candidates.push_back(d);
    }
    return true;
}
bool yolo_decode_nms(const int16_t* out0, size_t count0, const int16_t* out1, size_t count1,
                     const YoloPostConfig& cfg, std::vector<YoloDetection>& result) {
    result.clear();
    if (!out0 || !out1 || count0!=33*13*13 || count1!=33*26*26 ||
        cfg.image_width<=0 || cfg.image_height<=0 ||
        !std::isfinite(cfg.score_threshold) || cfg.score_threshold<0 || cfg.score_threshold>1 ||
        !std::isfinite(cfg.nms_iou) || cfg.nms_iou<=0 || cfg.nms_iou>1) return false;
    std::vector<YoloDetection> candidates;
    candidates.reserve(3*(13*13+26*26)); // At most 2535, no candidate truncation.
    const int mask0[3]={3,4,5}, mask1[3]={1,2,3};
    if (!decode_head(out0,13,mask0,0,cfg,candidates) ||
        !decode_head(out1,26,mask1,3*13*13,cfg,candidates)) return false;
    std::sort(candidates.begin(), candidates.end(), [](const YoloDetection& a, const YoloDetection& b) {
        return a.score!=b.score ? a.score>b.score : a.candidate_id<b.candidate_id;
    });
    std::vector<unsigned char> suppressed(candidates.size(),0);
    for (size_t i=0; i<candidates.size(); ++i) {
        if (suppressed[i]) continue;
        const YoloDetection& a=candidates[i];
        for (size_t j=i+1; j<candidates.size(); ++j)
            if (!suppressed[j] && a.class_id==candidates[j].class_id && iou(a,candidates[j])>=cfg.nms_iou)
                suppressed[j]=1;
        YoloDetection clipped=a;
        clipped.x1=std::max(0.0f,std::min(float(cfg.image_width),a.x1));
        clipped.y1=std::max(0.0f,std::min(float(cfg.image_height),a.y1));
        clipped.x2=std::max(0.0f,std::min(float(cfg.image_width),a.x2));
        clipped.y2=std::max(0.0f,std::min(float(cfg.image_height),a.y2));
        result.push_back(clipped);
    }
    return true;
}
