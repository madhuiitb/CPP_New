#include<iostream>
using namespace std;


int main(){
    auto fun1 = [](int a, int b){
                    cout<<"Does not capture anything\t"<<a+b<<endl;
            };
    fun1(3,4);

    int x=10;
    auto fun2 = [x](int a, int b){
                cout<<"It will capture X value and it's read-only value\n";
                cout<<"X: "<<x<<"\ta: "<<a<<"\tb: "<<b<<endl;
            //    x=x+10;//assignment of read-only variable
            };
    fun2(13,40);
    cout<<"X: "<<x<<endl;

    int y=10;
    auto fun3 = [&y](int a, int b){
        cout<<"It will capture y value and it can modify that value\n";
                cout<<"Y: "<<y<<"\ta: "<<a<<"\tb: "<<b<<endl;
                y=y+10;
            };
    fun3(13,40);
    cout<<"Y: "<<y<<endl;

    int x1=10;
    auto fun4 = [=](int a, int b)mutable{
                cout<<"X1: "<<x1<<"\ta: "<<a<<"\tb: "<<b<<endl;
                x1+=10;//assignment of read-only variable
                cout<<"X1 inside Lambda:- "<<x1<<endl;
            };
    fun4(13,40);
    cout<<"X1: "<<x1<<endl;


    int y1=10;
    auto fun5 = [&](int a, int b){
        cout<<"It will capture y value and it can modify that value\n";
                cout<<"Y1: "<<y1<<"\ta: "<<a<<"\tb: "<<b<<endl;
                y1=y1+10;
                cout<<"Y1 inside Lambda:- "<<y1<<endl;
            };
    fun5(13,40);
    cout<<"Y1: "<<y1<<endl;

    // int y2=10;
    // auto fun6 = [this](int a, int b){
    //     cout<<"It will capture y value and it can modify that value\n";
    //             cout<<"Y1: "<<y2<<"\ta: "<<a<<"\tb: "<<b<<endl;
    //             //y2=y2+10;
    //             cout<<"Y1 inside Lambda:- "<<y2<<endl;
    //         };
    // fun6(13,40);
    // cout<<"Y1: "<<y2<<endl;
    return 0;
}
