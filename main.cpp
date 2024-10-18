#include "matrix.hpp"
#include <iostream>
int main()
{
  size_t m = 0;
  size_t n = 0;
  std::cin >> m >> n;
  if (!std::cin) {
        std::cout << "Wrong input!\n";
        return 1;
  }
  int** t = matrix(m, n);
  enter(t, m, n);
  out(t, m, n);
  std::cout << '\n';
  clear(t, m);
}
