/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Task 8 from lesson 2.
 * @version   0.1
 * @date      02-08-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <string>
#include <vector>

std::string Rle(char s, size_t count) {
  return count > 1 ? s + std::to_string(count) : std::to_string(s);
}

int main() {
  system("cls");
  std::string str{"AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBB"};

  size_t count{};
  char temp{str[0]};
  std::string new_string{};
  for (size_t i{}; i < str.size(); ++i) {
    if (temp == str[i]) ++count;

    if (temp != str[i]) {
      new_string += Rle(temp, count);
      temp = str[i];
      count = 1;
    }
  }

  new_string += Rle(temp, count);

  std::cout << new_string << "\n";
  return 0;
}