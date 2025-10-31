#include <string>

namespace log_line {
std::string message(std::string line) {
    int start = line.find(':');
    int end = line.size();
    return line.substr(start + 2, end - start - 2);
}

std::string log_level(std::string line) {
    int start = 1;
    int end = line.find(']');
    return line.substr(start, end - start);
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
