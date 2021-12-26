#include<iostream>
#include "car_para.h"
using namespace std;


int main(){
  Car car(20);
  //car.FillFuel(10);

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
