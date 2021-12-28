#include<iostream>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int a=0, int b=0){
        x=a;
        y=b;
    }

    void showValues(){ // camelCase representations
        cout<<"x- "<<x<<" y- "<<y<<endl;
    }

    void Details(){
        cout<<"Details\n";
    }

    Point operator+(const Point& rhs){
        Point p;
        p.x = x + rhs.x;
        p.y = y+ rhs.y;

        return p;
    }

    Point operator-(const Point& rhs){
        Point p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;

        return p;
    }

    Point operator*(const Point& rhs);
    Point& operator=(const Point& rhs);

};

Point Point::operator*(const Point& rhs){
    Point p;
    p.x = x * rhs.x;
    p.y = y * rhs.y;
    return p;
}

Point& Point::operator=(const Point& rhs){
    // Point p;
    // p.x = rhs.x;
    // p.y = rhs.y;
    // return p;

    x = rhs.x;
    y= rhs.y;

    return *this;

}

int main(){

    Point p1(2,3), p2(3,4);
    p1.showValues();
    p2.showValues();
    Point p3 = p1+p2; //p1.operator(p2)
    p3.showValues(); //5,7
    Point p4 = p3-p1;
    p4.showValues(); //p2

    Point p5 =p4*p1; // 3, 4 * 2, 3
    p5.showValues();

    Point p7{5,6};
    Point p6;
    p6=p7; // copy Constructor
    p6.showValues();

    Point p8 = -p7; // -5, -6
    return 0;
}
