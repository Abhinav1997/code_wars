// https://www.codewars.com/kata/54ff3102c1bad923760001f3/cpp

#include <string>

bool isVowel(const char& ch) {
  // Return true if given char is a vowel
  switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
    default:
      return false;
  }
}

int getCount(const std::string& inputStr) {
  // Use count_if to count vowels in the string
  return std::count_if(inputStr.begin(), inputStr.end(),
                       [](const char& ch) { return isVowel(ch); });
}
