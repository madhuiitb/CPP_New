#include<iostream>
#include "7inheritance_all.h"
using namespace std;



int main(){

    //Car::showDetails();

    Car::ShowCount(); //without any object we can invoke the function

    Car c1; // it's an object.
    c1.AddPassengers(5);
    //
    // c1.ShowCount();
     c1.showDetails();
    //
    // c1.FillFuel(50.5f);
    // c1.AddPassengers(5);
    //
    // c1.Accelerate();
    // c1.Accelerate();
    // c1.Accelerate();
    // c1.Accelerate();
    // c1.Accelerate();
    // c1.Accelerate();
    //
    // c1.showDetails();
    //
    // c1.ShowCount();

    // cout<<"\n\n---::Using Static member Function to call directly without having Object::---"<<endl;
    // Car::ShowCount();
}
