// https://www.codewars.com/kata/54c27a33fb7da0db0100040e/cpp
#include <cmath>

bool is_square(const int n) {
  if (n < 0) return false;
  const int root { static_cast<int>(sqrt(n)) };
  return (root * root == n);
}
