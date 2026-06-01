#include "luhn.h"
#include <string>
#include <cctype>

namespace luhn {

bool valid(std::string n) {
    int sum = 0;
    std::string number;
    for (char c : n) {
        if (!isdigit(c) && c != ' ') return false;
    }
    for (char c : n) {
        if (!isdigit(c)) continue;
        number += c;
    }
    if (number.length() <= 1) return false;
    for (int i = number.length() - 2; i >= 0; i -= 2) {
        number[i] = ((number[i] - '0') * 2) > 9 ? (((number[i] - '0') * 2) - 9) + '0' : ((number[i] - '0') * 2) + '0';
    }
    for (char c : number) {
        sum += c - '0';
    }
    return sum % 10 == 0;
}

}
