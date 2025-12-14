#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here

std::string convert(int n) {
    std::string result;
    if (n % 3 == 0) result += "Pling";
    if (n % 5 == 0) result += "Plang";
    if (n % 7 == 0) result += "Plong";
    return result.empty() ? std::to_string(n) : result;
}

}  // namespace raindrops
