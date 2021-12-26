#include<iostream>
using namespace std;
#include "7inheritance_all.h"

 int Car :: totalCount = 2; // Not assigned any value automatically it will be assign to 0

void Car::FillFuel(float amount){
    totalCount++;
    fuel = amount;
} // Methods
void Car::Accelerate(){
    totalCount++;
    speed++;
    //fuel = fuel - 0.5f;
    fuel-=0.5f;
}

void Car::AppliedBrakes(){
    totalCount++;
    speed = 0;
}

int Car::AddPassengers(int passengers){
    totalCount++;
    this->passengers = passengers;
    return (*this);
}

void Car::showDetails()const{
    //passengers = 6;
    cout<<"Fuel:- "<<fuel<<endl;
    cout<<"Speed:- "<<speed<<endl;
    cout<<"Passengers:- "<<passengers<<endl;
}

void Car :: ShowCount(){
//    cout<<"Fuel: - "<<fuel<<endl;
  cout<<"Total Cars::- "<<totalCount<<endl;
}

//
// void Car::FillFuel(float amount){
//     // totalCount++;
//     fuel+=amount;
// }
// void Car::Accelerate(){
//     speed+=1;
//     fuel-=0.5f;
// }
// void Car::AppliedBrakes(){
//     speed = 0;
// }
// void Car::AddPassengers(int pass){
//     passengers  = pass;
// }
// void Car::showDetails(){
//     cout<<"Speed::- "<<speed<<endl;
//     cout<<"Fuel::- "<<fuel<<endl;
//     cout<<"Passengers::- "<<passengers<<endl;
// }
