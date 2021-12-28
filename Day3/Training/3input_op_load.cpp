#include<iostream>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int a=0, int b=0):x{a},y{b}{
        // x=a;
        // y=b;
        cout<<"Constructor Called\n";
    }

    void showValues(){
        cout<<"X:- "<<x<<" Y:- "<<y<<endl;
    }

    friend istream& operator>>(istream& input, Point& rhs);
    friend ostream& operator<<(ostream& output, Point& rhs);

};

istream& operator>>(istream& input, Point& rhs){
        input>>rhs.x;
        input>>rhs.y;
        return input;
}

ostream& operator<<(ostream& output, Point& rhs){
    output<<rhs.x<<','<<rhs.y<<endl;
    return output;
}

int main(){

    int x; // unique_ptr<int> p(new int);
    Point p1; // unique_ptr<Point> p1(new Point)
    p1.showValues();
    cin>>p1;
    //p1.showValues();
    cout<<p1;
    return 0;
}
