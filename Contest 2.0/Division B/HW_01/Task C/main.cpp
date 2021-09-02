#include <iostream>

int main() {
  uint32_t x{1}, y{1}, z{1};
  std::cin >> x >> y >> z;

  std::cout << (x == y || x > 12 || y > 12 ? 1 : 0);
}
