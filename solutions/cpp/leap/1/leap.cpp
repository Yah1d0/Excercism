#include "leap.h"

namespace leap {

bool is_leap_year(int n) {
    return (n % 4 == 0 && !(n % 100 == 0)) || n % 400 == 0;
}

}
