#include <iostream>
using namespace std;

// class template:
template <class T>
class A { //Increment class
    T value;
public:
    A(T arg){ // parameter Constructor to assign the values
        value=arg;
    }
    T Increment(){
        return ++value;
    }
};

// class template specialization:
template <>
class A <char> {
    char value;
public:
    A(char arg){// parameter Constructor to assign the values
        value=arg;
    }
    char uppercase(){
        if ((value>='a')&&(value<='z'))
        value+='A'-'a';
        return value;
    }
};

int main () {
    A<int> a1 (7);
    A<char> a2 ('s');
    A<double> a3(11.0);

    cout<<"Incremented int value: "<< a1.Increment()<< endl;
    cout<<"Uppercase value: "<<a2.uppercase()<< endl;
    cout<<"Incremented double value: "<<a3.Increment()<< endl;
    return 0;
}
