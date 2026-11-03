#include "board_transport.h"
#include "serial_protocol.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "platform.h"
#ifdef __cplusplus
}
#endif
#include "platform_config.h"
#include "netif/xadapter.h"
#include "lwip/init.h"
#include "lwip/ip_addr.h"
#include "lwip/tcp.h"
#include "xil_printf.h"
#include "xtime_l.h"
#include <algorithm>
#include <cstring>

namespace {
struct netif server_netif;
struct tcp_pcb* client_pcb = 0;
struct tcp_pcb* listen_pcb = 0;
shipserial::LineReader line_reader;

const unsigned RX_CAPACITY = 4096;
char rx_bytes[RX_CAPACITY];
volatile unsigned rx_read = 0;
volatile unsigned rx_write = 0;
volatile bool rx_overflow = false;
unsigned char* binary_target = 0;
volatile size_t binary_expected = 0;
volatile size_t binary_received = 0;
volatile bool binary_active = false;
volatile bool binary_done = false;
volatile bool binary_failed = false;

unsigned long long elapsed_us(XTime begin, XTime end) {
    return ((end - begin) * 1000000ULL) / COUNTS_PER_SECOND;
}

void push_byte(char value) {
    unsigned next = (rx_write + 1U) % RX_CAPACITY;
    if (next == rx_read) {
        rx_overflow = true;
        return;
    }
    rx_bytes[rx_write] = value;
    rx_write = next;
}

void client_error(void*, err_t) {
    client_pcb = 0;
    if (binary_active) binary_failed = true;
    binary_active = false;
}

err_t client_receive(void*, struct tcp_pcb* pcb, struct pbuf* packet, err_t error) {
    if (!packet) {
        tcp_recv(pcb, 0);
        tcp_err(pcb, 0);
        tcp_close(pcb);
        if (client_pcb == pcb) client_pcb = 0;
        if (binary_active) binary_failed = true;
        binary_active = false;
        return ERR_OK;
    }
    if (error != ERR_OK) {
        pbuf_free(packet);
        return error;
    }
    for (struct pbuf* part = packet; part; part = part->next) {
        const char* bytes = static_cast<const char*>(part->payload);
        for (u16_t i = 0; i < part->len; ++i) {
            if (binary_active) {
                binary_target[binary_received++] = static_cast<unsigned char>(bytes[i]);
                if (binary_received == binary_expected) {
                    binary_active = false;
                    binary_done = true;
                }
            } else {
                push_byte(bytes[i]);
            }
        }
    }
    tcp_recved(pcb, packet->tot_len);
    pbuf_free(packet);
    return ERR_OK;
}

err_t accept_client(void*, struct tcp_pcb* pcb, err_t error) {
    if (error != ERR_OK || !pcb) return ERR_VAL;
    if (client_pcb && client_pcb != pcb) tcp_abort(client_pcb);
    client_pcb = pcb;
    rx_read = rx_write = 0;
    rx_overflow = false;
    tcp_arg(pcb, 0);
    tcp_recv(pcb, client_receive);
    tcp_err(pcb, client_error);
    tcp_nagle_disable(pcb);
    xil_printf("SHIP TCP client connected\r\n");
    return ERR_OK;
}
}

// The generated Xilinx Zynq platform timer code expects this symbol.
struct netif* echo_netif = &server_netif;
extern volatile int TcpFastTmrFlag;
extern volatile int TcpSlowTmrFlag;
extern "C" void tcp_fasttmr(void);
extern "C" void tcp_slowtmr(void);

void ship_transport_poll() {
    if (TcpFastTmrFlag) {
        tcp_fasttmr();
        TcpFastTmrFlag = 0;
    }
    if (TcpSlowTmrFlag) {
        tcp_slowtmr();
        TcpSlowTmrFlag = 0;
    }
    xemacif_input(&server_netif);
}

bool ship_transport_init() {
    ip_addr_t ipaddr, netmask, gateway;
    unsigned char mac[] = {0x02, 0x00, 0x00, 0x00, 0x00, 0x10};
    IP4_ADDR(&ipaddr, SHIP_ETH_IP_A, SHIP_ETH_IP_B, SHIP_ETH_IP_C, SHIP_ETH_IP_D);
    IP4_ADDR(&netmask, 255, 255, 255, 0);
    IP4_ADDR(&gateway, 192, 168, 1, 1);

    init_platform();
    lwip_init();
    if (!xemac_add(&server_netif, &ipaddr, &netmask, &gateway, mac,
                   PLATFORM_EMAC_BASEADDR)) {
        xil_printf("SHIP Ethernet interface init failed\r\n");
        return false;
    }
    netif_set_default(&server_netif);
    netif_set_up(&server_netif);
    platform_enable_interrupts();

    listen_pcb = tcp_new_ip_type(IPADDR_TYPE_V4);
    if (!listen_pcb) return false;
    if (tcp_bind(listen_pcb, IP_ANY_TYPE, SHIP_ETH_TCP_PORT) != ERR_OK) return false;
    listen_pcb = tcp_listen(listen_pcb);
    if (!listen_pcb) return false;
    tcp_accept(listen_pcb, accept_client);
    xil_printf("SHIP Ethernet ready: 192.168.1.10:5000\r\n");
    return true;
}

bool ship_transport_connected() {
    ship_transport_poll();
    return client_pcb != 0;
}

bool ship_transport_send(const std::string& data) {
    size_t sent = 0;
    XTime start, now;
    XTime_GetTime(&start);
    while (sent < data.size()) {
        ship_transport_poll();
        if (!client_pcb) return false;
        u16_t available = tcp_sndbuf(client_pcb);
        if (available) {
            size_t count = std::min<size_t>(data.size() - sent, available);
            count = std::min<size_t>(count, 0xffffU);
            u8_t flags = TCP_WRITE_FLAG_COPY;
            if (sent + count < data.size()) flags |= TCP_WRITE_FLAG_MORE;
            err_t error = tcp_write(client_pcb, data.data() + sent,
                                    static_cast<u16_t>(count), flags);
            if (error == ERR_OK) {
                sent += count;
                tcp_output(client_pcb);
                continue;
            }
            if (error != ERR_MEM) return false;
        }
        XTime_GetTime(&now);
        if (elapsed_us(start, now) > 5000000ULL) return false;
    }
    return client_pcb && tcp_output(client_pcb) == ERR_OK;
}

bool ship_transport_receive_line(std::string& line) {
    ship_transport_poll();
    if (rx_overflow) {
        rx_read = rx_write;
        rx_overflow = false;
        line.clear();
        return false;
    }
    while (rx_read != rx_write) {
        char value = rx_bytes[rx_read];
        rx_read = (rx_read + 1U) % RX_CAPACITY;
        if (line_reader.feed(value, line)) return true;
    }
    return false;
}

bool ship_transport_begin_binary(void* target, size_t length) {
    ship_transport_poll();
    if (!client_pcb || !target || !length || binary_active) return false;
    binary_target = static_cast<unsigned char*>(target);
    binary_expected = length;
    binary_received = 0;
    binary_done = false;
    binary_failed = false;
    binary_active = true;
    return true;
}

bool ship_transport_binary_done() {
    ship_transport_poll();
    return binary_done;
}

bool ship_transport_binary_failed() {
    ship_transport_poll();
    return binary_failed;
}

size_t ship_transport_binary_received() { return binary_received; }

void ship_transport_end_binary() {
    binary_active = false;
    binary_target = 0;
    binary_expected = 0;
    binary_received = 0;
    binary_done = false;
    binary_failed = false;
}
