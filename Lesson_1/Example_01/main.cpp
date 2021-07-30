/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Thr first task from lesson 1.
 * @version   0.1
 * @date      29-07-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <map>
#include <string>

int main() {
  std::cout << "\x1b[2J";

  std::string str{"abadddaaddddddbdddccaa"};
  std::map<char, size_t> dictionary;
  for (auto&& i : str) ++dictionary[i];

  char answer{};
  size_t count{};
  for (auto&& i : dictionary) {
    if (i.second > count) {
      answer = i.first;
      count = i.second;
    }
  }

  std::cout << answer << " " << count << std::endl;

  return 0;
}