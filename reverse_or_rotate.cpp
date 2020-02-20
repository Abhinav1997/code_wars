// https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/cpp
#include <string>

class RevRot {
 public:
  static std::string revRot(std::string const& strng, unsigned int sz);
};

std::string RevRot::revRot(std::string const& strng, unsigned int sz) {
  std::string str;
  if (sz <= 0 || strng.empty()) return str;
  std::string buffer;
  unsigned int sum;
  // Loop through the loop, one chunk at a time
  for (auto it { strng.begin() }; it < strng.end(); it += sz) {
    // Break the loop if length of string left smaller than sz
    if (it + sz > strng.end()) break;
    buffer = std::string(it, it + sz);
    sum = 0;
    for (auto const& ch : buffer)
      sum += ch - '0';
    // Reverse string if sum is even otherwise rotate it
    if (sum % 2 == 0)
      std::reverse(buffer.begin(), buffer.end());
    else
      std::rotate(buffer.begin(), buffer.begin() + 1, buffer.end());
    // Append rotated or reversed string to output
    str.append(buffer);
  }
  return str;
}
