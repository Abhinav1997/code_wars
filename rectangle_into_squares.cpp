// https://www.codewars.com/kata/55466989aeecab5aac00003e/cpp
#include <vector>

class SqInRect {
 public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

std::vector<int> SqInRect::sqInRect(int lng, int wdth) {
  std::vector<int> solution;
  int min;
  if (lng == wdth) return solution;
  while (lng != 0 && wdth != 0) {
    if (lng < wdth) {
      min = lng;
      wdth -= min;
    } else {
      min = wdth;
      lng -= min;
    }
    solution.emplace_back(min);
  }
  return solution;
}
