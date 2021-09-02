#include <iostream>
#include <vector>

int main() {
  int64_t n{};
  std::cin >> n;

  std::vector<int64_t> v(n);
  for (auto&& i : v) std::cin >> i;

  std::cout << v[v.size() / 2];
}
