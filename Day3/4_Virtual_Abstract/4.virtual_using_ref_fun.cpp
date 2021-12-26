#include<iostream>
using namespace std;

class Animal{
public:
  virtual void eat(){
    cout<<"Animals can eat Generic food"<<endl;
  }
};

class Cat: public Animal{
  public:
  void eat(){
    cout<<"Cat eats CAT Food"<<endl;
  }
};

class Cow: public Animal{
  public:
  void eat(){
    cout<<"Cow eats COW Food"<<endl;
  }
};

void Calling(Animal *ptr){
  ptr->eat();
}
int main(){
  cout<<"Virtual Function Calling using with Pointer"<<endl;
  Animal *A;
  Cat catObject;
  Cow cowObject;
  A=&catObject;
  Calling(A);

  A=&cowObject;
  Calling(A);

  return 0;
}
