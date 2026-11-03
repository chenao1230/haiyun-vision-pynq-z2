// SPDX-License-Identifier: AGPL-3.0-only
// C++ port of the local Ultralytics 8.0.196 ByteTrack/XYAH workflow.
#ifndef ARM_BYTE_TRACKER_H
#define ARM_BYTE_TRACKER_H
#include "yolo_postprocess.h"
#include <vector>
struct ByteTrackResult { float x1,y1,x2,y2,score; int id,cls,detection_index; };
class ArmByteTracker {
public:
    ArmByteTracker() { reset(); }
    void reset();
    // No silent truncation. Returns false on invalid input or resource limit.
    bool update(const std::vector<YoloDetection>& detections, std::vector<ByteTrackResult>& result);
    struct Track {
        double m[8],p[8][8];
        int id,state,start,last,cls,index; bool confirmed,weak_seed,fragment_hold; float score;
        void init(const YoloDetection&,int,int,int);
        void predict();
        bool correct(const YoloDetection&,int,int);
        ByteTrackResult box() const;
    };
private:
    int frame,next_id;
    std::vector<Track> tracked,lost;
    std::vector<int> previous_removed;
};
#endif
