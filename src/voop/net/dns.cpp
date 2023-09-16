#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdexcept>
#include <sys/socket.h>
#include <fmt/core.h>

#include <voop/core/logger.hpp>
#include <voop/net/dns.hpp>

namespace voop {
namespace net {
std::string DNS::query(const std::string& name) {
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        throw std::runtime_error("DNS::query socket creation failed");
    }
    struct sockaddr_in address;
    address.sin_family = AF_INET;
    int rc = inet_pton(AF_INET, "1.1.1.1", &(address.sin_addr)); // IPv4
    if (rc != 0) {
        throw std::runtime_error(fmt::format("failed to parse name {}", name));
    }

    return "";
}
} // namespace net
} // namespace voop
