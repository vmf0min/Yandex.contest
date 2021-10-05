#include <iostream>
#include <set>
#include <sstream>

void ReadStream(std::set<size_t>& s) {
  std::string tmp = {};
  std::getline(std::cin, tmp);
  std::stringstream stream(tmp);

  size_t tmp_number;
  while (stream >> tmp_number) s.insert(tmp_number);
}

int main() {
  system("cls");
  std::set<size_t> s_1;
  ReadStream(s_1);

  std::set<size_t> s_2;
  ReadStream(s_2);

  size_t cnt = 0;
  for (auto&& s : s_2)
    if (auto it = s_1.find(s); it != s_1.end()) ++cnt;

  std::cout << cnt;
}
