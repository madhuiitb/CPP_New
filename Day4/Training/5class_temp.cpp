#include<iostream>
using namespace std;

template<typename T>
class Calculator{
    T x;
    T y;
public:
    Calculator(T a=0, T b=0):x{a},y{b}{
        cout<<"X type: "<<typeid(T).name();
        cout<<"\tY type: "<<typeid(T).name();
        cout<<"\tCalculator called with values: ==> X:=";
        cout<<x<<"\tY:="<<y<<"\t Results:=> ";
    }
    T add(){ return x+y;}
    T sub(){ return x-y;}
    T mult(){ return x*y;}
    T div(){ return x/y;}
};

int main(){
    Calculator<int> c1(2,3);
    cout<<c1.add()<<endl;

    Calculator<int> c2(2.3,5.3); // 2-5=> -3
    cout<<c2.sub()<<endl;

    Calculator<float> c3(6.6f,2.1f);
    cout<<c3.mult()<<endl;
    //
    // Calculator<float> c4(6.6f,2.1);
    // cout<<c4.div()<<endl;
    //
    // Calculator<double> c5(6,2.1);
    // cout<<c5.mult()<<endl;

    return 0;
}
