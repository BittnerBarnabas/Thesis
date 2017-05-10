#include <memory>
#include <string>
struct Base {};
struct Derived : Base {};

void function (std::shared_ptr<Base> ptr) {}

int main(int argc, const char**argv) {
	auto ptr = std::make_shared<Derived>();
	int upperBound = std::stoi(argv[1]);
	for( int i = 1; i < upperBound; ++i) {
		function(ptr);
}}
