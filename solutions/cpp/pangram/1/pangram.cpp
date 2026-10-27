#include "pangram.h"
#include <string>
#include <set>

namespace pangram {
    bool is_pangram(std::string s) {
        std::string new_s = "";
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                new_s += c;
            } else if (c >= 'A' && c <= 'Z') {
                new_s += c + 32;
            }
        }
        std::set<char> unique_chars(begin(new_s), end(new_s));
        std::string res(begin(unique_chars), end(unique_chars));
        return res == "abcdefghijklmnopqrstuvwxyz";
    }
}