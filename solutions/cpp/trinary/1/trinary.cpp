#include "trinary.h"
#include <string>
#include <cmath>

namespace trinary {

int to_decimal(std::string trinary) {
    for (char c : trinary) {
        if (c < '0' || c > '2') {
            return 0;
        }
    }
    int result = 0;
    int j = 0;
    for (int i = trinary.length() - 1; i >= 0; i--) {
        result += (trinary[i] - '0') * pow(3, j);
        j++;
    }
    return result;
}

}  // namespace trinary
