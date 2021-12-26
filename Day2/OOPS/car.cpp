#include<iostream>
#include "car.h"
using namespace std;

Car :: Car(){
  cout<<"Default Constructor\n"<<endl;
  fuel=0;
  speed=0;
  passingers=1;
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
void Car :: AddPassengers(int count){
  passingers = count;
}
void Car :: Dashboard(){
  cout<<"Fuel::- "<<fuel<<endl;
  cout<<"Speed::- "<<speed<<endl;
  cout<<"Passingers::- "<<passingers<<endl;
}
