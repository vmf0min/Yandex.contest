#include <iostream>

struct Coordinates {
  int32_t x;
  int32_t y;
};

int main() {
  int32_t d;
  std::cin >> d;

  Coordinates a = {0, 0};  // 1
  Coordinates b = {d, 0};  // 2
  Coordinates c = {0, d};  // 3

  Coordinates point;
  std::cin >> point.x >> point.y;

  if (point.x < 0 && point.y < 0) {
    std::cout << 1;  // a
  } else if (point.x > 0 && point.y < 0) {
    int32_t middle = d >> 1;
    if (point.x <= middle)
      std::cout << 1;  // a
    else
      std::cout << 2;  // b
  } else if (point.x < 0 && point.y > 0) {
    int32_t middle = d >> 1;
    if (point.y <= middle)
      std::cout << 1;  // a
    else
      std::cout << 3;  // c
  } else if (point.x >= 0 && point.y >= 0) {
    if (point.x + point.y <= d) {
      std::cout << 0;  // in
    } else if (point.x >= point.y) {
      std::cout << 2;  // b
    } else {
      std::cout << 3;  // c
    }
  }
}
