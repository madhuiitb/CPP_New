#include<iostream>
#include "car_inti.h"
using namespace std;

Car :: Car(){
  cout<<"Default Constructor\n"<<endl;

}

Car :: Car(float amount){
  cout<<"Parameterized Constructor\n"<<endl;
  fuel=amount;
  // speed=0;
  // passingers=1;
}

Car :: ~Car(){
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
}

// void Car :: Dashboard()const{
//   cout<<"Fuel::- "<<fuel<<endl;
//   cout<<"Speed::- "<<speed<<endl;
//   cout<<"Passingers::- "<<passingers<<endl;
// }
