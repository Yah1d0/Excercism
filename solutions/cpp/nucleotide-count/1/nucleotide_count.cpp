#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {
std::map<char, int> count(std::string s) {
  std::map<char, int> count = {{'A', 0}, {'T', 0}, {'G', 0}, {'C', 0}};
  for (char c : s) {
    if (auto it = count.find(c); it != end(count)) {
      ++count[c];
    } else {
      throw std::invalid_argument("");
    }
  }
  return count;
}
} // namespace nucleotide_count