#include<iostream>
using namespace std;

class Constructor{
  int x;
  int y;
public:
  Constructor(int a, int b):x{a},y{b}{
    // x=X;
    // y=Y;
  }
  void Print() {
    cout<<"X: "<<x<<" Y:"<<y<<endl;
  }
};

int main(){
  cout<<"Parameterized Constructor::"<<endl;
  Constructor c2(10,5);
  c2.Print();
  return 0;
}
