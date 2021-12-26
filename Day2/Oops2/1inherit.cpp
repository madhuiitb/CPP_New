#include<iostream>
using namespace std;

class Animal{
public:
  void Eat(){
    cout<<"Animal Eating"<<endl;
  }
  void Run(){
    cout<<"Animal Running"<<endl;
  }
  void Speak(){
    cout<<"Animal Speaking"<<endl;
  }
};

class Dog: public Animal{
public:
  void Eat(){
    cout<<"Animal Eating Meat"<<endl;
  }
  void Speak(){
    cout<<"Animal Barking"<<endl;
  }
};

int main(){
  Dog d;
  d.Eat();
  d.Run();
  d.Speak();
  return 0;
}
