#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  system("cls");
  size_t l, k;
  std::cin >> l >> k;

  std::vector<size_t> v(k);
  for (auto&& i : v) std::cin >> i;

  auto mid = l >> 1;
  size_t left = 20000;
  size_t right = 20000;

  if ((l & 1) == 1 && std::binary_search(v.begin(), v.end(), mid)) {
    std::cout << mid;
  } else {
    for (size_t pos = 0; pos < v.size() && v[pos] < mid; ++pos) left = v[pos];
    right = *std::upper_bound(v.begin(), v.end(), left);
    std::cout << left << " " << right;
  }
}
