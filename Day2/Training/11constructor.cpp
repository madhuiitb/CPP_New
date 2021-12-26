#include<iostream>
using namespace std;

class Point{
//    int *ptr;
    int x;
public:
    Point():x{40}{ //
        // x=x;
    //    x=30;
        cout<<"Default Constructor is Called\n";
    }

    // Point(int a){
    //     x=a;
    //     cout<<"Parameterized Constructor is Called\n";
    // }

    Point(int a):x{a}{
        //x=a;
        cout<<"Parameterized Constructor is Called\n";
    }

    Point(const Point& obj){
        x=obj.x;
        cout<<"Copy Constructor is Called\n";
    }


    void Print(){
        cout<<x<<endl;
    }
};

void add(int a, int b){
    cout<<a+b<<endl;
}

int main(){
    Point p1; // it calls the Default Constructor
    p1.Print();

    Point p2{10}; //  p2(5) This is not goog practices
    p2.Print();

    int a=10;
    int b=a;

    Point p3; // Object Default Constructor
    p3=p2;
    p3.Print();
    return 0;
}
