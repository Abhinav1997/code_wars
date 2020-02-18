// https://www.codewars.com/kata/54e6533c92449cc251001667/cpp

#include <string>
#include <vector>

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> unique;
  // Iterate through iterable vector and add all unique elements
  for (const auto& item : iterable) {
    if (unique.empty() || item != unique.back())
      unique.emplace_back(item);
  }
  return unique;
}

// Overloaded function for string input
std::vector<char> uniqueInOrder(const std::string& iterable) {
  // Call uniqueInOrder function with char type vector
  return uniqueInOrder(std::vector<char> (iterable.begin(), iterable.end()));
}
