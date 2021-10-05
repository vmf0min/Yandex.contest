#include <iostream>
#include <set>
#include <sstream>

void ReadStream(std::set<size_t>& s) {
  std::string tmp = {};
  std::getline(std::cin, tmp);
  std::stringstream stream(tmp);

  size_t tmp_number;
  while (stream >> tmp_number) {
    auto [it, ok] = s.insert(tmp_number);
    std::cout << (ok ? "NO\n" : "YES\n");
  }
}

int main() {
  system("cls");
  std::set<size_t> set;
  ReadStream(set);
}
