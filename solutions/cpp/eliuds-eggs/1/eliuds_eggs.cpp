#include "eliuds_eggs.h"

namespace chicken_coop {

int positions_to_quantity(int n) {
    int count{};
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

}  // namespace chicken_coop
