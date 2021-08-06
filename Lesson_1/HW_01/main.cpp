/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Пролезет ли кирпич сторонами abc в проем de?
 * @version   0.1
 * @date      06-08-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <set>

int main() {
  system("cls");

  std::multiset abc{4, 2, 2};
  std::multiset de{4, 2};

  auto iter_abc{abc.begin()};
  auto iter_de{de.begin()};

  if ((*iter_abc <= *iter_de) && *(++iter_abc) <= *(++iter_de))
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return 0;
}