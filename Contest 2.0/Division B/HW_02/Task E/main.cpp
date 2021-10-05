#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  size_t n_folders = 0;
  std::cin >> n_folders;

  std::vector<int32_t> n_diplomas(n_folders);
  for (auto&& v : n_diplomas) std::cin >> v;

  auto max = std::max_element(n_diplomas.begin(), n_diplomas.end());

  int32_t sum = 0;
  for (auto&& v : n_diplomas) sum += v;

  std::cout << sum - *max;
}
