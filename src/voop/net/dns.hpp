#pragma once

#include <bits/stdint-uintn.h>
#include <string>
#include <vector>

namespace voop {
namespace net {

class DNSPacket {
    class DNSHeader {

        /*
            https://datatracker.ietf.org/doc/html/rfc1035#autoid-41
                                            1  1  1  1  1  1
            0  1  2  3  4  5  6  7  8  9  0  1  2  3  4  5
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |                      ID                       |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |QR|   Opcode  |AA|TC|RD|RA|   Z    |   RCODE   |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |                    QDCOUNT                    |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |                    ANCOUNT                    |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |                    NSCOUNT                    |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
            |                    ARCOUNT                    |
            +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
        */
        uint16_t d_id;
        uint16_t d_flags;
        uint16_t d_qdcount;
        uint16_t d_ancount;
        uint16_t d_nscount;
        uint16_t d_arcount;
    };

    class DNSQuestion {
        /* a domain name represented as a sequence of labels, where
           each label consists of a length octet followed by that
           number of octets.  The domain name terminates with the
           zero length octet for the null label of the root.  Note
           that this field may be an odd number of octets; no
           padding is used.
        */
        std::vector<uint8_t> d_qname;
        uint16_t d_qtype;
        uint16_t d_qclass;
    };
};

class DNS {
    /*
    raises runtime_error in case of network failure
    */
    static std::string query(std::string name);
};
} // namespace net
} // namespace voop
