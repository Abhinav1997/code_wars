// https://www.codewars.com/kata/55908aad6620c066bc00002a/cpp

#include <string>

bool XO(const std::string& str) {
  int count { };
  // Increment count when X/x is encountered
  // Decrement count when O/o is encountered
  // Count will be zero if number of X/x's and O/o's are the same
  for (const char& ch : str) {
    if (std::toupper(ch) == 'X')
      ++count;
    else if (std::toupper(ch) == 'O')
      --count;
  }
  return (count == 0);
}
