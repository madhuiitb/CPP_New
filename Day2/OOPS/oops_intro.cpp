#include<iostream>
#include "car.h"
using namespace std;


int main(){
  Car car;
  car.FillFuel(10);
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Accelerate();
  car.Dashboard();
  cout<<"\n\n---::Brakes are applied::---"<<endl;
  car.Brake();
  car.Dashboard();
}
