#include<iostream>
using namespace std;


class vehicleClass{ //Parent Class
public:
    string brand = "Hyundai"; // Public Access Specifier Attribute
    void ManualSpeed(){ // Method
        cout<<"Press on Accelerator\n";
    }
    void AutomaticSpeed(){
        cout<<"Put it on Accelerator Mode\n";
    }
    void ShowValues(){
        cout<<brand<<endl;
    }
    
};

class carClass : public vehicleClass{ //Child class or Derived Class
public:
    int x=100;
    void ShowValues(){ //Override method
        cout<<"Xvalue:- "<<x<<endl;
    }

};

int main(){
    carClass c1; // Child class object
    // c1.ShowValues();
    // c1.ManualSpeed();
    // c1.AutomaticSpeed();
    //
    // c1.brand = "KIA";
     c1.ShowValues();
    cout<<c1.x<<endl;
    //c1.brand = ""

    return 0;
}
