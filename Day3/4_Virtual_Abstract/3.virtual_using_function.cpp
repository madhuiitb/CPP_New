#include<iostream>
using namespace std;


class Animal{
public:
virtual  void eat(){
    cout<<"Animal eats generic food"<<endl;
  }

  virtual ~Animal(){
      cout<<"Destructord called\n";
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

  Animal *A1 = new Cat;
  A1->eat();

  Animal *A2 = new Dog;
  A2->eat();

  return 0;
}
