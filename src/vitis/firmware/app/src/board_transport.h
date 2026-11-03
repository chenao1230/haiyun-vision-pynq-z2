#ifndef SHIP_BOARD_TRANSPORT_H
#define SHIP_BOARD_TRANSPORT_H

#include <string>
#include <stddef.h>

// PYNQ-Z2 static IPv4 endpoint used by the PC application.
#define SHIP_ETH_IP_A 192
#define SHIP_ETH_IP_B 168
#define SHIP_ETH_IP_C 1
#define SHIP_ETH_IP_D 10
#define SHIP_ETH_TCP_PORT 5000

bool ship_transport_init();
void ship_transport_poll();
bool ship_transport_connected();
bool ship_transport_send(const std::string& data);
bool ship_transport_receive_line(std::string& line);
bool ship_transport_begin_binary(void* target, size_t length);
bool ship_transport_binary_done();
bool ship_transport_binary_failed();
size_t ship_transport_binary_received();
void ship_transport_end_binary();

#endif
