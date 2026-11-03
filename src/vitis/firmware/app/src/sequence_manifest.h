#ifndef SEQUENCE_MANIFEST_H
#define SEQUENCE_MANIFEST_H
#include <string>
#include <vector>
struct SequenceFrame {
    std::string sequence,source,original,timestamp,path;
    int frame,width,height;
};
bool parse_sequence_manifest(const std::string&,std::vector<SequenceFrame>&,std::string& error);
bool run_sd_sequence_if_present(const std::string& weight_dir);
#endif
