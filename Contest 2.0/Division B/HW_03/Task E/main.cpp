#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
  system("cls");
  size_t m;
  std::cin >> m;

  std::vector<std::set<char>> witness(m);
  std::cin.ignore();
  for (size_t cnt = 0; cnt < m; ++cnt) {
    std::string wit = {};
    std::getline(std::cin, wit);

    std::set<char> symbols;
    for (auto&& c : wit) symbols.insert(c);
    witness[cnt] = std::move(symbols);
  }

  size_t n;
  std::cin >> n;
  std::vector<std::pair<std::string, size_t>> valid_number_plates(n);
  size_t max_wits = 0;
  std::cin.ignore();
  for (size_t cnt = 0; cnt < n; ++cnt) {
    std::string number_plate = {};
    std::getline(std::cin, number_plate);

    std::set<char> symbols;
    for (auto&& c : number_plate) symbols.insert(c);

    size_t n_wits = 0;
    for (auto&& wit : witness) {
      size_t cnt = 0;
      for (auto&& c : wit)
        if (auto it = symbols.find(c); it == symbols.end()) {
          cnt = 0;
          break;
        } else {
          ++cnt;
        }
      if (cnt != 0) ++n_wits;
    }

    valid_number_plates[cnt] = std::pair(number_plate, n_wits);
    max_wits = std::max(max_wits, n_wits);
  }

  for (auto&& [plate, wits] : valid_number_plates)
    if (wits == max_wits) std::cout << plate << std::endl;
}
