#include<memory>

class Base {
public:
  int value;
  Base() : value{4} {}
};

class Derived : public Base {

};


void function(const Base & p){
}

int main(int argc, char const *argv[]) {
  auto ptr = std::make_shared<Derived>();
  //auto ptr = new Derived();
  function(*ptr.get());
  return 0;
}
