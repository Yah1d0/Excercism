#include "bob.h"
#include <string>
#include <cctype>

namespace bob {

std::string hey(std::string text) {
    size_t space_count{};
    for (char c : text) {
        if (isspace(c)) space_count++;
    }
    if (space_count == text.length()) return "Fine. Be that way!";
    bool isq = false;
    for (int i = text.length() - 1; i >= 0; i--) {
        if (!std::isspace(text[i])) {
            isq = (text[i] == '?');
            break;
        }
    }
    int char_count{};
    int upper_count{};
    for (char c : text) {
        if (std::isalpha(c)) {
            char_count++;
            if (std::isupper(c)) upper_count++;
        }
    }
    bool isy = char_count > 0 && char_count == upper_count;
    if (isy && !isq) return "Whoa, chill out!";
    else if (isy && isq) return "Calm down, I know what I'm doing!";
    else if (!isy && isq) return "Sure.";
    else return "Whatever.";
}

}
