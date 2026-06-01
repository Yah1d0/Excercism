#include "hamming.h"
#include <string>
#include <stdexcept>

namespace hamming {
    int compute(std::string s1, std::string s2) {
        if (s1.length() != s2.length()) throw std::domain_error("");
        int res = 0;
        for (long unsigned int i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[i]) ++res;
        }
        return res;
    }
}
