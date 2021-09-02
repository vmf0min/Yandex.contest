#include <iostream>

int main() {
  int32_t n{};
  int32_t i{};
  int32_t j{};
  std::cin >> n >> i >> j;

  int32_t x{std::abs((j - i + n - 1) % n)};
  int32_t y{std::abs((n - j + i - 1) % n)};
  int32_t result{std::min(x, y)};

  std::cout << result;
}
