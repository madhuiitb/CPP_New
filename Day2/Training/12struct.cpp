#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;

    Point(int x=0, int y=0):x{x},y{y}{

    }
    void Print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Point p1, p2(20);
    // p1.x=10;
    // p1.y=20;
    p2.Print();
    return 0;
}
