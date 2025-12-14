#include "rotational_cipher.h"
#include <string>

namespace rotational_cipher {

std::string rotate(std::string text, int key) {
    std::string result;
    for (char c : text) {
        if (c >= 'a' && c <= 'z') result += 'a' + ((c + key) - 'a') % 26;
        else if (c >= 'A' && c <= 'Z') result += 'A' + ((c + key) - 'A') % 26;
        else result += c;
    }
    return result;
}

}  // namespace rotational_cipher
