// struct A {
//   virtual void f() = 0;
// };
//
// struct B : A {
//   virtual void f() { }
// };
#include<iostream>
using namespace std;

class A {
  virtual void f() = 0;
};

class B : public A {
  void f() {
      cout<<"Test\n";
  }
};

// Error:
// Class A is an abstract class
// A g();

// Error:
// Class A is an abstract class
// void h(A);
A& i(A&);

int main() {

// Error:
// Class A is an abstract class
  // A a; //cannot declare variable 'a' to be of abstract type 'A'
   //
    A *pa;
    B b;

// Error:
// Class A is an abstract class
  static_cast<A>(b); //invalid cast to abstract class type 'A'
}
