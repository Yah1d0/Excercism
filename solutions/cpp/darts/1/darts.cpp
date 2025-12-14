#include "darts.h"
#include <cmath>

namespace darts {

int score(float x, float y) {
    float l = sqrt(pow(x, 2) + pow(y, 2));
    if (l >= 0 && l <= 1) return 10;
    else if (l > 1 && l <= 5) return 5;
    else if (l > 5 && l <= 10) return 1;
    else return 0;
}

}  // namespace darts
