#include <string>
#include <sstream>
#include <iostream>
#include <vector>

int main(int argc, const char **argv) {
  std::string a("Foo"), b("Baz");
  for(int i = 0; i < std::stoi(argv[1]); ++i) {
    a.append("Bar").append(b);
  }
}
