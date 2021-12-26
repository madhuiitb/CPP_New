
// It is like constructor as it is, and in front it will have the symbol "~"
// Used to destruct the memory of the object where constructor has created the memory
// Destructor will automatically call, as like constructor
// You can call explicitly, but that's not a good once
// When you create a new object using "new" then definitely you need to call Destructors easily.
//

#include<iostream>
using namespace std;

class Destructor{
  int x;
  int y;
  int *z;
public:
  Destructor(){
    x=0;
    y=0;
  }
  void Print(){
    cout<<"X:: "<<x<<" Y::"<<endl;
  }
  ~Destructor(){
    cout<<"Not required to call Destructor"<<endl;
  }
};

int main() {
  cout<<"Test for Destructor\n"<<endl;
  int *ptr = new int;
  Destructor d1;
  d1.Print();
  delete ptr;
  d1.Print();
  return 0;
}
