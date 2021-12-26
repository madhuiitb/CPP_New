#include<iostream>
#include "car_static.h"
using namespace std;

int Car::totalCount=2; //Automatically Initiliazes to 0
Car :: Car(){
  totalCount++;
  cout<<"Default Constructor\n"<<endl;
  fuel=0;
   speed=0;
   passingers=1;

}

Car :: Car(float amount){
  totalCount++;
  cout<<"Parameterized Constructor\n"<<endl;
  fuel=amount;
  // speed=0;
  // passingers=1;
}

Car :: ~Car(){
  totalCount--;
  cout<<"Default Destructor\n"<<endl;
}
void Car :: FillFuel(float amount){
  fuel = amount;
}
void Car :: Accelerate(){
  speed++;
  fuel = fuel - 0.5f;
}
void Car :: Brake(){
  speed = 0;
}

// void Foo(const Car &car){
//   cout<<"this pointer called and used as object"<<endl;
// }
// void Car :: AddPassengers(int passingers){
//   this->passingers = passingers;
//   Foo(*this);
// }

void Car :: AddPassengers(int count){
  passingers = count;

}

void Car :: Dashboard(){
  cout<<"Fuel::- "<<fuel<<endl;
  cout<<"Speed::- "<<speed<<endl;
  cout<<"Passingers::- "<<passingers<<endl;
  cout<<"Total Cars::- "<<totalCount<<endl;
}

// void Car :: Dashboard()const{
//   cout<<"Fuel::- "<<fuel<<endl;
//   cout<<"Speed::- "<<speed<<endl;
//   cout<<"Passingers::- "<<passingers<<endl;
// }

void Car :: ShowCount(){
  cout<<"Total Cars::- "<<totalCount<<endl;
}
