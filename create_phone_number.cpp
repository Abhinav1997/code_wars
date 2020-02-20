// https://www.codewars.com/kata/525f50e3b73515a6db000b83/cpp

#include <string>

std::string createPhoneNumber(int arr[10]) {
  std::string phone_number { "(" };
  for (size_t i {}; i < 3; ++i)
    phone_number.append(std::to_string(arr[i]));
  phone_number.append(") ");
  for (size_t i { 3 }; i < 6; ++i)
    phone_number.append(std::to_string(arr[i]));
  phone_number.append("-");
  for (size_t i { 6 }; i < 10; ++i)
    phone_number.append(std::to_string(arr[i]));
  return phone_number;
}
