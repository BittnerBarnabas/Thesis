#include <memory>

struct Base {};
struct Derived : Base {};

void function (const Base&  ptr) {}

int main() {
	auto ptr = std::make_shared<Derived>();
	for( int i = 1; i < 10000000; ++i) {
		function(*ptr.get());
}} 
