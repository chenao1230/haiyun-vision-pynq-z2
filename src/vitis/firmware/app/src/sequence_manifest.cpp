#include "sequence_manifest.h"
#include <sstream>
#include <cstdlib>
#include <set>
namespace {
bool number(const std::string&s,int& n,int low,int high){
    if(s.empty()||s.size()>6)return false;
    for(size_t i=0;i<s.size();++i)if(s[i]<'0'||s[i]>'9')return false;
    n=std::atoi(s.c_str());return n>=low&&n<=high;
}
bool safe(const std::string&s,bool path){
    if(s.empty()||s.size()>(path?120:80)||s.find("..")!=std::string::npos||s[0]=='/')return false;
    for(size_t i=0;i<s.size();++i){char c=s[i];if(!((c>='0'&&c<='9')||(c>='A'&&c<='Z')||(c>='a'&&c<='z')||c=='_'||c=='-'||c=='.'||(path&&c=='/')))return false;}
    return true;
}
}
bool parse_sequence_manifest(const std::string& text,std::vector<SequenceFrame>& rows,std::string& err){
    rows.clear();err.clear();
    std::istringstream in(text);std::string line,previous;std::set<std::string> seen,paths;int index=0,width=0,height=0,lineno=0;
    while(std::getline(in,line)){
        ++lineno;if(!line.empty()&&line.back()=='\r')line.pop_back();
        if(lineno==1){if(line!="sequence_id,frame_id,source_image,original_name,timestamp,original_width,original_height,bin_path"){err="manifest header mismatch";return false;}continue;}
        if(line.empty())continue;
        std::vector<std::string> c;std::istringstream fields(line);std::string value;while(std::getline(fields,value,','))c.push_back(value);
        if(c.size()!=8||line.size()>512||rows.size()>=512){err="invalid manifest columns/size";return false;}
        SequenceFrame f;f.sequence=c[0];f.source=c[2];f.original=c[3];f.timestamp=c[4];f.path=c[7];
        if(!safe(f.sequence,false)||f.sequence.size()>31||!safe(f.source,false)||!safe(f.original,false)||!safe(f.path,true)||f.path.compare(0,10,"sequences/")!=0||!number(c[1],f.frame,0,999999)||!number(c[5],f.width,1,16384)||!number(c[6],f.height,1,16384)||f.timestamp.size()>32){err="invalid frame metadata/path";return false;}
        if(f.sequence!=previous){if(seen.count(f.sequence)){err="sequence repeated non-contiguously";return false;}seen.insert(f.sequence);previous=f.sequence;index=0;width=f.width;height=f.height;}
        if(f.frame!=index++||width!=f.width||height!=f.height||!paths.insert(f.path).second){err="non-contiguous frames, duplicate path or changed dimensions";return false;}
        rows.push_back(f);
    }
    if(rows.empty()){err="empty manifest";return false;}return true;
}
