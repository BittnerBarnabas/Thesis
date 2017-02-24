#include<memory>

class Base {
public:
  int value;
  Base() : value{4} {}
  Base(int a) : value{a} {}
};

class Derived : public Base {
public:
  Derived() {}
  Derived(int a) : Base(a) {}
};


void function(std::shared_ptr<Base> p)
{
  int a = 5;
  a += p->value;
}

void function2(int a, double b, std::shared_ptr<Base> p){

}

int main(int argc, char const *argv[]) {
  auto ptr = std::make_shared<Derived>();
  auto ptr2 = std::make_shared<Base>();
  function(ptr);
  function(ptr2);
  function2(3,3.2, ptr);
  return 0;
}
