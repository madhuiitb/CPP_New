#include<iostream>
using namespace std;

class Constructor{
  int x;
  int y;
public:
  Constructor(){
      cout<<"Default Constructor Called\n";
  }
  Constructor(int X, int Y){
      cout<<"Parameterized constructor called\n";
    x=X;
    y=Y;
  }
  Constructor(const Constructor& ref){
      cout<<"Copy constructor called\n";
    x=ref.x;
    y=ref.y;
    cout<<"copy==x:: "<<x<<" y:: "<<y<<endl;
  }
  void Print() {
    cout<<"X: "<<x<<" Y:"<<y<<endl;
  }
  ~Constructor(){
      cout<<"Destructor Called\n";
  }
};

int main(){
 // cout<<"Default Constructor::"<<endl;
  Constructor c2(10,5); // Parameterized
  Constructor c3; // Default
  Constructor c4=c2; // Copy Constructor
  c4.Print();
  return 0;
}
