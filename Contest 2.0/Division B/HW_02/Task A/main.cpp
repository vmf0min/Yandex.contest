#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<size_t> vec;
  size_t tmp = 1;
  while (tmp != 0) {
    std::cin >> tmp;
    vec.push_back(tmp);
  }
  vec.pop_back();

  auto max = std::max_element(vec.begin(), vec.end());
  auto count = std::count(vec.begin(), vec.end(), *max);

  std::cout << count;
}
