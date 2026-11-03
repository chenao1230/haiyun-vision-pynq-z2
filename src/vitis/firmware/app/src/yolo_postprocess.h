#ifndef YOLO_POSTPROCESS_H
#define YOLO_POSTPROCESS_H
#include <stdint.h>
#include <stddef.h>
#include <vector>

struct YoloDetection {
    float x1, y1, x2, y2, score;
    int class_id;
    int candidate_id;
};
struct YoloPostConfig {
    int image_width, image_height;
    float score_threshold, nms_iou;
};
// Signed Q9 CHW outputs: 33x13x13 and 33x26x26. Direct resize, no letterbox.
// Highest scoring class per anchor, same-class NMS on unclipped boxes,
// then clip to original image bounds. Equal scores use candidate order.
bool yolo_decode_nms(const int16_t* out0, size_t count0,
                     const int16_t* out1, size_t count1,
                     const YoloPostConfig& config,
                     std::vector<YoloDetection>& result);
const char* yolo_class_name(int id);
// Board implementation uses FatFs, checks writes and close.
bool yolo_write_csv(const char* path, const std::vector<YoloDetection>& result);
#endif
