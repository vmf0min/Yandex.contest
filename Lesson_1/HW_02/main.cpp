/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Задача про метро
 * @version   0.1
 * @date      06-08-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <set>



int main() {
  system("cls");
  size_t a{}, b{};
  size_t m{}, n{};

  size_t min_time_1{(a + 1) * (n - 1) + 1};
  size_t max_time_1{min_time_1 + 2 * a};

  size_t min_time_2{(b + 1) * (m - 1) + 1};
  size_t max_time_2{min_time_2 + 2 * b};

  size_t min{std::max(min_time_1, min_time_2)};
  size_t max{std::min(max_time_1, max_time_2)};

  if (min < max)
    std::cout << min << " " << max;
  else
    std::cout << -1;

  return 0;
}