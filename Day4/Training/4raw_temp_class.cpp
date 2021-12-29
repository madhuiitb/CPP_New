#include<iostream>
using namespace std;

class Calsi{
    int x;
    int y;
public:
    Calsi(int a=0, int b=0){
        x=a;
        y=b;
    }
    int add();
    int mult();
    int sub();
    int div();
};
int Calsi::add(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x+y;
}

int Calsi::mult(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x*y;
}

int Calsi::sub(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x-y;
}

int Calsi::div(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x/y;
}

/*
---------------------------float------------------
*/

class Calsi1{
    float x;
    float y;
public:
    Calsi1(float a=0, float b=0){
        x=a;
        y=b;
    }
    float add();
    float mult();
    float sub();
    float div();
};
float Calsi1::add(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x+y;
}

float Calsi1::mult(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x*y;
}

float Calsi1::sub(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x-y;
}

float Calsi1::div(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x/y;
}

/*
---------------------------double------------------
*/

class Calsi2{
    double x;
    double y;
public:
    Calsi2(double a=0, double b=0){
        x=a;
        y=b;
    }
    double add();
    double mult();
    double sub();
    double div();
};
double Calsi2::add(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x+y;
}

double Calsi2::mult(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x*y;
}

double Calsi2::sub(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x-y;
}

double Calsi2::div(){
    cout<<"X: "<<x<<"\tY: "<<y<<"\tResult:=> ";
    return x/y;
}

/*
------------------ Combinations for int, float, double -------------

1. int, int
2. float, float
3. double, double

4. int, double
5. int, float

6. float, double
7. float, Int

8. double, Int
9. double, float

For 1,2,3 we have almost 100 lines of code right?
to have other Combinations i.e 6 * 35 lines ===> 200 lines

In total approx it cross 300 lines plus
So, it is not good practices to have code,
We have lot of techniques to optimization the code
we can reuse the code if we create a one function

so here-----------> we can have class templates.

*/

int main(){
    Calsi2 c1(20.2,2.0);
    cout<<c1.add()<<endl;
    cout<<c1.mult()<<endl;
    cout<<c1.sub()<<endl;
    cout<<c1.div()<<endl;
    return 0;
}
