#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>

void ReadStream(std::set<size_t>& s) {
  std::string tmp = {};
  std::cin.ignore();
  std::getline(std::cin, tmp);
  std::stringstream stream(tmp);
  std::cin.clear();

  size_t tmp_number;
  while (stream >> tmp_number) s.insert(tmp_number);
}

int main() {
  system("cls");
  size_t n;
  std::cin >> n;

  std::vector<size_t> v(n, 1);

  std::string ans = {};
  while (true) {
    std::set<size_t> tmp;
    ReadStream(tmp);
    if (tmp.empty()) break;

    std::cin >> ans;
    if (ans == "YES")
      for (auto&& i : tmp) ++v[i - 1];
    else if (ans == "NO")
      for (auto&& i : tmp) v[i - 1] = 0;
  }

  auto max_freq = *std::max_element(v.begin(), v.end());

  if (max_freq != 0) {
    for (size_t i = 0; i < v.size(); ++i)
      if (v[i] == max_freq) std::cout << i + 1 << " ";
  } else {
    std::cout << 0;
  }
}
