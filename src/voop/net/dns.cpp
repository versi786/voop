#include <stdexcept>
#include <voop/net/dns.hpp>
#include <voop/core/logger.hpp>
#include <sys/socket.h>

namespace voop {
namespace net {
std::string DNS::query(std::string name) {
    int sockfd = socket(AF_INET, SOCK_DGRAM , 0);
    if (sockfd < 0) {
        throw std::runtime_error("DNS::query socket creation failed");
    }
    return "";
}
} // namespace net
} // namespace voop
