#include "serial_protocol.h"
#include <cstdio>
namespace shipserial {
std::vector<std::string> split(const std::string& line){
    std::vector<std::string> a;size_t start=0,pos;
    while((pos=line.find(',',start))!=std::string::npos){a.push_back(line.substr(start,pos-start));start=pos+1;}
    a.push_back(line.substr(start));return a;
}
bool safe_id(const std::string& s,size_t limit){
    if(s.empty()||s.size()>limit)return false;
    for(size_t i=0;i<s.size();++i){char c=s[i];if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return false;}
    return true;
}
uint32_t crc32(const std::string& data){
    return crc32(data.data(),data.size());
}
uint32_t crc32(const void* data,size_t length){
    const unsigned char* bytes=static_cast<const unsigned char*>(data);uint32_t c=0xffffffffU;
    for(size_t i=0;i<length;++i){c^=bytes[i];for(int j=0;j<8;++j)c=(c>>1)^(0xedb88320U & (0U-(c&1U)));}
    return c^0xffffffffU;
}
std::string hexcrc(const std::string& data){char b[16];std::snprintf(b,sizeof(b),"%08lX",(unsigned long)crc32(data));return b;}
bool LineReader::feed(char c,std::string& line){
    if(c=='\r')return false;
    if(c=='\n'){line=overflow?"INVALID_LINE":buffer;buffer.clear();overflow=false;return !line.empty();}
    if((unsigned char)c<32||(unsigned char)c>126){overflow=true;return false;}
    if(buffer.size()>=127){overflow=true;return false;}
    if(!overflow)buffer+=c;return false;
}
}
