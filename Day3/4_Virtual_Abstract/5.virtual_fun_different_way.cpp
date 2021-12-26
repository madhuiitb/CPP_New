#include<iostream>
using namespace std;


class Animal{
public:
virtual  void eat(){
    cout<<"Animal eats generic food"<<endl;
  }
};

class Cat: public Animal{
public:
  void eat(){
    cout<<"Cat eats non-veg food"<<endl;
  }
};


class Dog: public Animal{
public:
  void eat(){
    cout<<"Dog eats Dog's  food"<<endl;
  }
};

int main() {
  Cat catObject;
  Dog dogObject;

  Animal &c1 = catObject;
  c1.eat();

  Animal &d1 = dogObject;
  d1.eat();

  return 0;
}
