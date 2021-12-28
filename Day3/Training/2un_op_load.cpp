#include<iostream>
using namespace std;

class Integer{
    int x;
public:
    Integer(int a=0){
        x=a;
    }

    void showValues(){
        cout<<"X=> "<<x<<endl;
    }

    Integer operator - (){
        // Integer i;
        // i = -x;
        return Integer{-x};
    }

    Integer& operator ++(){ // Pre increment
    //    Integer temp = x;
        cout<<"Pre-increment\n";
        x++;
        //cout<<"Pre-increment::- "<<x<<endl;
        return *this;
    }

    Integer operator ++(int){ // post increment
        Integer temp = x; // temp = 10
        ++(*this);  // ++(10) ==> 11;
        return temp; // 10
    }

};

int main(){

    // Integer p1(7);
    // p1.showValues();
    // Integer p2 = -p1;
    // p2.showValues();
    //
    // (++p1).showValues();
    // p1.showValues();
    Integer p3(10);
    (p3++).showValues();//
    p3.showValues();
    return 0;
}
