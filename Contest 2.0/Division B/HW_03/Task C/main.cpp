#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

void ReadStream(std::vector<size_t>& s) {
  std::string tmp = {};
  std::getline(std::cin, tmp);
  std::stringstream stream(tmp);

  size_t tmp_number;
  while (stream >> tmp_number) s.push_back(tmp_number);
}

int main() {
  system("cls");
  std::vector<size_t> v;
  ReadStream(v);

  for (auto&& i : v) {
    if (std::count(v.begin(), v.end(), i) == 1) std::cout << i << " ";
  }
}
