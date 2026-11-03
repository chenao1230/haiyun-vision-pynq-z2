#ifndef SHIP_SERIAL_PROTOCOL_H
#define SHIP_SERIAL_PROTOCOL_H
#include <string>
#include <vector>
#include <stdint.h>
namespace shipserial {
std::vector<std::string> split(const std::string& line);
bool safe_id(const std::string& s, size_t limit);
uint32_t crc32(const std::string& data);
uint32_t crc32(const void* data, size_t length);
std::string hexcrc(const std::string& data);
class LineReader {
    std::string buffer; bool overflow;
public:
    LineReader():overflow(false){}
    bool feed(char c,std::string& line);
};
}
#endif
