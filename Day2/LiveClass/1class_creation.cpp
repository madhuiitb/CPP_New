#include<iostream>
using namespace std;

class testClass1{
private:
    //int salary;
    // int x;
    // int y;
    int salary{0}; // Uniform initialization
public:
    void SetValue(int amount){
        salary = amount;
    }
    void ShowValues(){
        cout<< " salary: "<<salary<<endl;
    }
    int GetValue(){
        return salary;
    }
};



int main(){
    testClass1 t1;
    // t1.salary=100000;
    // t1.x=10;
    // t1.y=20;
    t1.ShowValues();
    t1.SetValue(2000000);
    cout<<t1.GetValue();
    // testClass1 t2,t3;
    // t2.x=1;
    // t2.y=10;
    // t2.ShowValues();
    //
    // t3.x=15;
    // t3.y=5;
    // t3.ShowValues();
    return 0;
}
