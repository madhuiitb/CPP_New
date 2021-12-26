#include<iostream>
using namespace std;

// Create a function
//Syntax: <return type> function_name(){ data members, member functions}
void myFunction(int x=8, double y=10.5) {
  cout << "MyFunction called and then I got executed!"<<endl;
  cout<<"The Values::-->XX::- "<<x<<" YY::- "<<y<<endl;
}

int main() {
  myFunction(5); // Y will take default values
  myFunction(); // Both will take the default values
  myFunction(15, 5.5); // No default values
  myFunction(5.5); // Y will be the default value and x will  be the 5
 myFunction(20.5, 20);
  return 0;
}
