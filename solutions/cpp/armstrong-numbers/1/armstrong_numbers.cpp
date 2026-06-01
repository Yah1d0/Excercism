#include "armstrong_numbers.h"
#include <string>
#include <cmath>

namespace armstrong_numbers {

bool is_armstrong_number(int n) {
    std::string s = std::to_string(n);
    int sum = 0;
    for (char c : s) {
        sum += pow((c - '0'), s.length());
    }
    return sum == n;
}

}
