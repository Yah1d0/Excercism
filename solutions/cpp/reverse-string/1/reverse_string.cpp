#include "reverse_string.h"
#include <string>

namespace reverse_string {

std::string reverse_string(std::string text) {
    std::string result;
    for (int i = text.length() - 1; i >= 0; i--) {
        result += text[i];
    }
    return result;
}

}  // namespace reverse_string
