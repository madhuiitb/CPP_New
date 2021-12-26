#include<iostream>
using namespace std;

void default1(const char * name, int a, int b, int x, int y);

void default1(const char * name, int a, int b=-1, int x=-1, int y=-1){
  cout<<"Name::- "<<name<<endl;
  cout<<"A::- "<<a<<endl;
  cout<<"B::- "<<b<<endl;
  cout<<"X::- "<<x<<endl;
  cout<<"Y::- "<<y<<endl;
}

int main() {
  /* code */

  default1("Test", 500);
  return 0;
}
