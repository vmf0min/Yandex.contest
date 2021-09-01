/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Задача про скорую помощь
 * @version   0.1
 * @date      06-08-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

bool IsValid(std::string s) {
  bool is_valid{};
  std::multimap<char, size_t> map;
  for (size_t i{}; i < s.size(); ++i) map.insert(std::make_pair(s[i], i));

  return is_valid;
}

int main() {
  system("cls");

  std::string str{"({}){[]}"};
  std::cout << IsValid(str);

  return 0;
}