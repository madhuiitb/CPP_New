#include<iostream>
using namespace std;

template <class X>
X add(X a, X b){ // double
    cout<<"\ntype:- "<<typeid(X).name()<<"\n";
    return a+b;
}


//template <class T>

int main(){
    cout<<add(2.3,6.2);
    cout<<add(2.3f,6.2f);
    return 0;
}
