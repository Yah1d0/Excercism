#include "two_fer.h"
#include <string>

namespace two_fer {
    std::string two_fer(std::string s) {
        if (s == "") return "One for you, one for me.";
        else return "One for " + s + ", one for me.";
    }
}