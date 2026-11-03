#ifndef ARM_TRACK_DISPLAY_BOX_H
#define ARM_TRACK_DISPLAY_BOX_H
#include "byte_tracker.h"
// Select geometry only; never change tracker state, ID, score or class.
bool matched_display_box(const ByteTrackResult& track,
                         const std::vector<YoloDetection>& detections,
                         YoloDetection& display);
#endif
