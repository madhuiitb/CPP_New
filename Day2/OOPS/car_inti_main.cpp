#include<iostream>
#include "car_inti.h"
using namespace std;


int main(){
  cout<<"\n\n---::Using Default Initiliazers::---"<<endl;
  Car c1;
c1.Dashboard();

  cout<<"\n\n---::Accelerate::---"<<endl;
  c1.Accelerate();
  c1.Accelerate();
  c1.Accelerate();
  c1.Accelerate();
  c1.Dashboard();

  cout<<"\n\n---::Filling Fuel::---"<<endl;
  c1.FillFuel(10);
  c1.Accelerate();
  c1.Accelerate();
  c1.Accelerate();
  c1.Accelerate();
  c1.Dashboard();

  cout<<"\n\n---::Brakes are applied::---"<<endl;

  Car car(100);
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Brake();
  car.AddPassengers(3);
  car.Dashboard();
}
