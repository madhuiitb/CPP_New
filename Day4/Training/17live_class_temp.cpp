#include<iostream>
using namespace std;

class Calculator{
    int x;
    int y;
public:
    //Calculator(int a=0, int b=0):x{a},y{b}{}
    Calculator(int a=0, int b=0){
        cout<<"Constructor Called\n";
        x=a;
        y=b;
        cout<<"X:- "<<x<<"\tY:- "<<y<<endl;
    }
    int add(){return x+y;}
    int sub(){return x-y;}
    int mult(){return x*y;}
    int div(){return x/y;}
};

class CalculatorDouble{
    double x;
    double y;
public:
    //Calculator(int a=0, int b=0):x{a},y{b}{}
    CalculatorDouble(double a=0, double b=0){
        cout<<"Constructor Called\n";
        x=a;
        y=b;
        cout<<"X:- "<<x<<"\tY:- "<<y<<endl;
    }
    double add(){return x+y;}
    double sub(){return x-y;}
    double mult(){return x*y;}
    double div(){return x/y;}
};

int main(){
    // Calculator c1;
    // Calculator c2(10);
    Calculator c3(350,10);
    cout<<"Add:- "<<c3.add()<<endl;
    CalculatorDouble c4(35.01, 10.11); // double
    cout<<"Add:- "<<c4.add()<<endl;
    return 0;
}
