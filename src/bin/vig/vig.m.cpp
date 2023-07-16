#include <iostream>
#include <string>

#include <zlib.h>

#include <voop/net/dns.hpp>
#include <voop/core/logger.hpp>

int main(int argc, char* argv[]) {
    if (argc < 1) {
        std::cerr << "argc < 1" << std::endl;
        std::abort();
    }
    voop::core::Logger logger(argv[0]);
    V_LOG_TRACE << "TEST";
    V_LOG_DEBUG << "TEST";
    V_LOG_INFO << "TEST";
    V_LOG_WARN << "TEST";
    V_LOG_ERROR << "TEST";
    return EXIT_SUCCESS;
}
