#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << "A" << "B" << 'C';
  std::cout << std::endl << std::endl << std::endl;
  for (size_t i = 0; i < 4; i++) {
    std::string A = "BABA";
    std::string B = "CACA";
    std::string C = A + B +A + A +B;
    A.find("A");
    A.find('B');
  }
  return 0;
}
