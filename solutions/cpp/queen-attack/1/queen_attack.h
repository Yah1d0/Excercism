#pragma once
#include <utility>

namespace queen_attack {
struct chess_board {
  const std::pair<int, int> w, b;
  const std::pair<int, int> white() const;
  const std::pair<int, int> black() const;
  chess_board(std::pair<int, int> w, std::pair<int, int> b);
  bool can_attack() const;
};
} // namespace queen_attack
