#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack {
const std::pair<int, int> chess_board::white() const { return w; }
const std::pair<int, int> chess_board::black() const { return b; }
chess_board::chess_board(std::pair<int, int> w, std::pair<int, int> b)
    : w(w), b(b) {
  if ((w.first == b.first && w.second == b.second) || w.first < 0 || w.first >= 8 || w.second < 0 || w.second >= 8 ||
      b.first < 0 || b.first >= 8 || b.second < 0 || b.second >= 8)
    throw std::domain_error("Invalid data");
}
bool chess_board::can_attack() const {
  if (w.first == b.first || w.second == b.second ||
      w.first - w.second == b.first - b.second ||
      w.first + w.second == b.first + b.second)
    return true;
  return false;
}
} // namespace queen_attack

