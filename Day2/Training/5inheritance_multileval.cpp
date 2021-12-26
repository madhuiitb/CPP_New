#include<iostream>
using namespace std;

class Parent{
public:
    string s1 = "Parent Class\n";
    void showValues(){
        cout<<s1;
    }
    // void showDetails(){
    //     cout<<s1;
    // }
};

class Child : public Parent{ // inherited from Parent class
public:
    string s2 = "Child class from Parent Class\n";
    void showDetails(){
        cout<<s2;
    //    cout<<"Parent class accessible::- "<<s1;
    }
    void showValues(){
        cout<<"TEST\n";
    }
};

class grandChild : public Child{ // Which is inherited from Child Class
public:
    int x=100;

    void showDetails(){
        cout<<x<<endl;
    }
};


int main(){
    grandChild gc1;

    gc1.showValues(); //Able to accessible to the methods of the Parent class and Child class
    gc1.showDetails();

    gc1.s1="Parent 1\n";
    gc1.s2="Parent 2\n";
    gc1.showValues();
    gc1.showDetails();

    cout<<gc1.x<<endl;

    gc1.x=200;
    gc1.showValues();


    return 0;
}
