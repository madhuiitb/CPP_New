#include<iostream>
using namespace std;

class Animal{
public:
  virtual void eat(){
    cout<<"Eat gereric Food"<<endl;
  }
};

class Cat: public Animal{
  public:
    void eat(){
      cout<<"Eat Non-veg Food"<<endl;
    }
};

class Cow: public Animal{
  public:
    void eat(){
      cout<<"Eat Veg Food"<<endl;
    }
};

int main(){
  cout<<"Testing for the Main"<<endl;

  Animal *ptr;

  Cat catObject;
  Cow cowObject;

  ptr = &catObject;
  cout<<"\nCalling CAT object"<<endl;
  ptr->eat();
  ptr = &cowObject;
  cout<<"\nCalling COW object"<<endl;
  ptr->eat();


  return 0;
}
