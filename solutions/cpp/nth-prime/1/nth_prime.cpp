#include <climits>
#include <cmath>
#include <stdexcept>
#include <vector>

namespace nth_prime {
int nth(int n) {
  if (n <= 0) {
    throw std::domain_error("Invalid idx");
  }
  int limit;
  if (n <= 6)
    limit = 15;
  else
    limit = static_cast<int>(n * (std::log(n) + std::log(std::log(n))));
  std::vector<bool> prime(limit, true);
  prime[0] = prime[1] = false;
  for (int i = 2; static_cast<long long>(i * i) < limit; ++i) {
    if (prime[i]) {
      for (int j = static_cast<long long>(i * i); j < limit; j += i) {
        prime[j] = false;
      }
    }
  }
  int curr_n = 0;
  int i = 2;
  while (i < limit && curr_n < n) {
    if (prime[i]) {
      ++curr_n;
    }
    ++i;
  }
  return --i;
}
} // namespace nth_prime