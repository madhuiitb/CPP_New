#include<iostream>
using namespace std;

class Point{
    int x;
    int y;


    Point(int x=0, int y=0):x{x},y{y}{
        cout<<"Constructor Called\n";
    }

//    Point operator

    // Point operator+(const Point& rhs){
    //     Point p;
    //     p.x=x+rhs.x;
    //     p.y=y+rhs.y;
    //     return p;
    // }

    void ShowValues(){
        cout<<"X value::- "<<x <<" Y value::- "<<y<<endl;
    }
};

// int add(int a, int b){
//     return a+b;
// }

// Point Add(const Point& a, const Point &b){
//     Point p;
//     p.x = a.x+b.x;
//     p.y = a.y+b.y;
//     return p;
// }

// y = ((a+b)*c)/((d-e)*f)*(a*z)
//
// x= a.add(b);
// y= x.mult(c);
// z= d.sub(e);
// w= z.mult(f);
// r = y.div(w);

int main(){

    Point p1{1,2};
    Point p2{2,3};
//    p1.Add(p2);
    //    Point p1.Add(p2);
    //
    // Point p1(1,2), p2(4,5);
    // Point p3 = p1 + p2; //p1.operator+()
    // p3.ShowValues();
    //
    // Point p4(7,6), p5(6,2);
    // Point p6 = p4*p5;
    // p6.ShowValues();
    //
    // Point p7 = p6/p3;
    // p7.ShowValues();
    return 0;
}
