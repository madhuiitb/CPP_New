#include<iostream>
using namespace std;


int main(){
    //[](){};
    // [](){
    //     cout<<"Lambda Function Called\n";
    // }(); // IIFE's
    //
    // auto fun1 = [](){
    //     cout<<"Assign Name\n";
    // };
    // fun1();
    //
    //
    // auto fun2 = [](int x){
    //     cout<<"Value: -"<<x<<endl;
    //     //return x;
    // };
    // fun2(10);
    //
    // auto fun3 = [](auto x, auto y ,auto z){
    //     cout<<"Value: -"<<x<<y<<z<<endl;
    // //    return x<y;
    // };
    // fun3(10, 20, 30);
    //
    // int y=30;
    // int z=15;
    // //int add(int a, int b, int x)
    // auto fun4 = [y,z](int x){
    //     cout<<"Value:- "<<x<<endl;
    //     cout<<"Y:- "<<y<<endl;
    //     cout<<x+y+z<<endl;
    //     //return x;
    // };
    // fun4(10);

    // int y1=10;
    // int z1=15;
    // auto fun5 = [y1,z1](){
    //     cout<<y1<<"\t"<<z1<<endl;
    //     //z1=z1+10;
    // };
    // fun5();

    // int y2=10;
    // int z2=15, a1=11,a2=12, a3=100;
    //
    // auto fun6 = [=](){
    //     cout<<y2<<"\t"<<z2<<endl;
    //     cout<<a1<<"\t"<<a2<<endl;
    //     //z2=z2+10;
    // };
    // fun6();

    int z3=13, z4=11, z5=21;
    auto fun7 = [=]()mutable{
        cout<<z3<<endl;
        z3=10;
        z4++; //z=12
        z5=z5+8; // 21+8=> 29
        cout<<"Z3:- "<<z3<<endl;
        cout<<"Z4:- "<<z4<<"\tZ5:- "<<z5<<endl;
    };
    fun7();
    cout<<z3<<"\t"<<z4<<"\t"<<z5<<endl;
    //
    // auto fun8 = [&](){
    //     cout<<z3<<endl;
    //     z3 = z3+7;
    //     z4++;
    //     z5--;
    //     cout<<z3<<endl;
    // };
    // fun8();
    // cout<<z3<<"\t"<<z4<<"\t"<<z5<<endl;

    // int a1=10;
    // int b1=2;
    //
    // auto fun9 = [a1, &b1](){
    //     cout<<a1<<endl;
    //     b1=b1+8;
    //     cout<<b1<<endl;
    // };
    // fun9();

    return 0;
}
