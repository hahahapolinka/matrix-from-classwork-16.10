#include "matrix.hpp"
#include <iostream>
int main()
{
  size_t m = 0;
  size_t n = 0;
  std::cin >> m >> n;
  int** t = nullptr;
  if (!std::cin) {
        std::cout << "Wrong input!\n";
        return 1;
  }
  try {
	t = matrix(m, n);
  }catch(const std::bad_alloc & e){
	std::cerr << "Out of memory!\n";
	return 1;
  }
  enter(t, m, n);
  out(t, m, n);
  std::cout << '\n';
  clear(t, m);
}
