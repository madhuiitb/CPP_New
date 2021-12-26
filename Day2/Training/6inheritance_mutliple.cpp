#include<iostream>
using namespace std;

class Parent1{
public:
    string s1 = "Parent Class1\n";
    void showValues(){
        cout<<s1;
    }
};

class Parent2{
public:
    string s2 = "Parent Class2\n";
    void showDetails(){
        cout<<s2;
    }
};
// I can not access the values of class Parent 2 if Access Specifier is Private;

class multipleDerived : public Parent1, private Parent2{
public:
    void Print(){
        cout<<s2<<endl;
    }
};
// I can not access the values of class Parent 2
//in any function with the object ref to multipleDerived;

int main(){
    multipleDerived md1;
    //md1.showDetails(); // Order invoking the methods
    md1.showValues();
    md1.Print();
    return 0;
}
