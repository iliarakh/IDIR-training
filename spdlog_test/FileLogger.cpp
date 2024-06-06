#include "spdlog/spdlog.h>
#include "spdlog/sinks/basic_file_sink.h"

int main() {
    
    auto file_logger = spdlog::basic_logger_mt("basic_logger", "log.txt");

    
    file_logger->info("Hello World");

    
    spdlog::drop_all();

    return 0;
}
