#include<iostream>
#include "fun1.h"
using namespace std;


// int Add(int a, int b){
//   return a+b;
// }
//
// int AddDouble(double a, double b){
//   return a+b;
// }

// void Print(int x){
//   cout<<x<<endl;
// }
//
// void Print(double x){
//   std::cout << "double"<<x << '\n';
// }

int main() {
  /* code */
  int add = Add(3,4);
  std::cout << "Int Add fucntion Value::- "<<add<< '\n';
  double addDouble = Add(3.5, 4.5);
  std::cout <<  "Double Add fucntion Value::- "<< addDouble << '\n';

   Print(3);
   Print(3.5);

  return 0;
}
