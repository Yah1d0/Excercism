#include "hexadecimal.h"
#include <string>
#include <cctype>

namespace hexadecimal {

int convert(std::string n) {
    size_t wrong = n.find_first_not_of("0123456789abcdef");
    if (wrong != std::string::npos) return 0;
    int result = 0;
    for (char c : n) {
        result *= 16;
        if (c >= '0' && c <= '9') {
            result += c - '0';
        } else if (c >= 'a' && c <= 'f') {
            result += 10 + (c - 'a');
        }
    }
    return result;
}

}  // namespace hexadecimal
