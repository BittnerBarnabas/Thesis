#include <string>
#include <vector>
#include <map>

struct T1 {};

struct T2 {
  T2(){}
  T2(T1){}
};


void function(std::vector<T2>& vec){}
template<class TT1, class TT2>
void f2(const std::map<TT1,TT2>* ptr) {}

int main() {
    std::map<int,T2> mymap;

    mymap.emplace(2,T1());
    const std::map<int,T2>* ptr = &mymap;

    f2(ptr);

    std::vector<T2> a;
    a.push_back(T1());
    function(a);
    a.size();
    a.emplace_back(T1());
}
