#include<iostream>
using namespace std;

void myFunction();

int main() {
  myFunction(); // calling the function
  return 0;
}


// Create a function
//Syntax: <return type> function_name(){ data members, member functions}
void myFunction() {
  cout << "MyFunction called and then I got executed!";
}
