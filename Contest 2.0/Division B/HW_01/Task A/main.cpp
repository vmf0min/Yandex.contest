#include <iostream>

int main() {
  int32_t r{};
  int32_t i{};
  int32_t c{};
  std::cin >> r >> i >> c;

  int32_t result{};
  if (i == 0)
    result = r != 0 ? 3 : c;
  else if (i == 1)
    result = c;
  else if (i == 4)
    result = r != 0 ? 3 : 4;
  else if (i == 6)
    result = 0;
  else if (i == 7)
    result = 1;
  else
    result = i;

  std::cout << result;
}
