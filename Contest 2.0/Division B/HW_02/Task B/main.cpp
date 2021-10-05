#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::vector<int32_t> vec(10);
  for (auto&& v : vec) std::cin >> v;
  std::vector<int32_t> distance(vec.size());

  int32_t shop_pos = -20;
  for (int32_t i = 0; i < static_cast<int32_t>(vec.size()); ++i) {
    if (vec[i] == 2) shop_pos = i;
    if (vec[i] == 1) distance[i] = i - shop_pos;
  }

  int32_t ans = 0;
  shop_pos = 30;
  for (int32_t i = vec.size() - 1; i >= 0; --i) {
    if (vec[i] == 2) shop_pos = i;
    if (vec[i] == 1) {
      int32_t min_dist = std::min(shop_pos - i, distance[i]);
      ans = std::max(ans, min_dist);
    }
  }
  std::cout << ans;
}
