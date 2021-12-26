#include<iostream>
using namespace std;

class Constructor{
  int x;
  int y;
public:
  Constructor(int X, int Y){
    x=X;
    y=Y;
  }
  Constructor(const Constructor& ref){
    x=ref.x;
    y=ref.y;
    cout<<"x:: "<<x<<" y:: "<<y<<endl;
  }
  void Print() {
    cout<<"X: "<<x<<" Y:"<<y<<endl;
  }
};

int main(){
  cout<<"Copy Constructor::"<<endl;
  Constructor c2(10,5);
  Constructor c3=c2;
  c3.Print();
  return 0;
}
