#include <vector>
#include <string>
#include <iostream>

#define asd "b"
class MyObj {
public:
  MyObj(int,int){}
};

int main() {
  std::cout << asd;
  std::vector<std::string> myVec;
  std::vector<int> myVec4;
  std::vector<MyObj> myVec2 = { {3,8}, MyObj(2,1) };
  //myVec4.push_back(4);
  myVec2.emplace_back(3,8);
  myVec4.push_back(5);
  myVec2.push_back(MyObj(2,1));

//  std::vector<std::vector<int>> myVec2;
  //std::vector<int> myVec3 = {4,3,5};
  //std::vector<std::vector<int>> myVec4 = {{4,3,5}};

  myVec.push_back(std::string("abc"));
  if(myVec.size() == 4) {
    return 4;
  }
  //myVec.emplace_back(5);
  //myVec.push_back(MyObj());
  //myVec2.push_back(myVec);
  //myVec3.push_back(1);
}
