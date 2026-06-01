#include "grains.h"
#include <cmath>

namespace grains {

unsigned long long square(int n) {
    if (n < 1 || n > 64) return 0; 
    return 1ULL << (n - 1);
}

unsigned long long total() {
    return ~0ULL; 
}

}  // namespace grains
