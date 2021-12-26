#include<iostream>
using namespace std;


class Constructor{
  int x;
  int y;
public:
  Constructor(){
    x=0;
    y=0;
  }
  void Print(/* arguments */) {
    /* code */
    cout<<"X: "<<x<<" Y:"<<y<<endl;
  }
};

int main(){
    //cout<<"Testing"<<endl;
    Constructor c1;
    c1.Print();
    return 0;
}
