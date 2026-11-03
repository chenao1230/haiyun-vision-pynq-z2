#ifndef SHIP_SERIAL_PACKETS_H
#define SHIP_SERIAL_PACKETS_H
#include "sequence_manifest.h"
#include "byte_tracker.h"
#include <string>
// timing: read, inference, decode_nms, tracker, sd_csv, compute (microseconds).
std::string ship_frame_packet(const SequenceFrame&,const std::string&,const std::string&,const std::vector<YoloDetection>&,const std::vector<ByteTrackResult>&,const unsigned long long timing[6]);
#endif
