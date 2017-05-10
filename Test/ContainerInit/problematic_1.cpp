#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <limits>

#define semicolon ;
class MyObj {
public:
  MyObj(int,int){}
  MyObj(const MyObj& othr){}
};

double f(int a) {
  return 2*a;
}

constexpr int f2(double a) {
  return 2*a;
}

//typedef short abc123;

using namespace std;

struct C {
  int a;
  int b;
  C(int val) : a(val), b(2*a) {}
};

int main() {
//  map<int, short> map1{{1, (short)1111121}, {3, (short)-1}};

  //map<int,MyObj> map1{{2, MyObj(2.3,3.1)}};
  //map1.insert({2.1, MyObj(2.2,3.1)});



  //vector<string> vec;
  //vec.emplace_back("Ab");
  for(int i = 0; i < 100000; ++i) {
  vector<int> vec1;
  vec1.push_back(f(1));
  //vec1.push_back(vec1.size());
  vec1.push_back(3.2);
  vec1.insert(vec1.begin()++, 3);
  vec1.emplace_back(4.2);
  vec1.emplace_back(f(2));

  {
    vector<short> vec;
    vec.push_back(1212121);
    vec.emplace_back(1212121);
  }
  {
    vector<unsigned short> vec;
    vec.push_back(1212121);
    vec.emplace_back(1212121);
  }
  {
    vector<unsigned int> vec;
    vec.push_back(1212121);
    vec.emplace_back(1212121);
  }

  /*{
    vector<std::string> vec;
    vec.emplace_back("Abc");
}*/


  {
    vector<short> vec;
    vec.push_back(1212121);
    vec.emplace_back(1212121);
  }
  {
    vector<signed long int> vec;
    vec.push_back(1212121);
    vec.emplace_back(1212121);
  }
  {
    vector<std::string> vec;
    vec.push_back("Abc");
    vec.emplace_back("Baba");
    vector<short> vec2;
    vec2.push_back(1212121);
    vec2.emplace_back(1212121);
  }


  vector<int> vec2 = {1,2,3};
  vec2.push_back(4);
  vec2.emplace_back(5);

  vector<MyObj> vec3;
  vec3.push_back(MyObj(1,1.2));
  vec3.push_back(MyObj(2,2));
  vec3.push_back(MyObj(3,3));

  map<string, int> map1;
  map1.insert({"2", 2.2});
  map1["3"] = 3;
}
  /*for(auto &t : vec1) {
    cout << t;
  }*/
}
