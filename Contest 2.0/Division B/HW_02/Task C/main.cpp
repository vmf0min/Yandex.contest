#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  size_t cnt = 0;
  for (size_t i = 0; i < (str.size() >> 1); ++i)
    if (str[i] != str[str.size() - i - 1]) ++cnt;

  std::cout << cnt;
}
