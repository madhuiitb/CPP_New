#include<iostream>
using namespace std;



int Add(int, int);
double Add(double, double);

void Add1(int x, int y){
    cout<<x+y<<endl;
}

// int Add1(int x, int y){
//     cout<<x+y<<endl;
//     return 1;
// }

void Add2(){
    int x=7;
    int y=20;
    cout<<x+y<<endl;
}

int main(){
    cout<<"Calling the function or Invoking:\n";
    cout<<Add(10,5)<<endl;
    Add1(15,2);
    Add2();

    cout<<Add(10.7,5.1)<<endl;
    return 0;
}

int Add(int x, int y){
    int z;
    z=x+y;
    return z;
}

double Add(double x, double y){
    double z;
    z=x+y;
    return z;
}
