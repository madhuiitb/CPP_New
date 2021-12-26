#include<iostream>
using namespace std;

// Create a function
//Syntax: <return type> function_name(){ data members, member functions}
void myFunction(int x) {
  cout << "MyFunction called and then I got executed!"<<endl;
  cout<<"The Value::--> "<<x<<endl;
}

int main() {
  myFunction(10); 
  myFunction(20);
  myFunction(30);
  return 0;
}
