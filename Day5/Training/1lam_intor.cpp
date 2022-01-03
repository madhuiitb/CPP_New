#include<iostream>
using namespace std;


int main(){
    [](){
        cout<<"Lambda function executed\n";
    }();

    auto fun = [](){
                cout<<"Lambda function executed\n";
            };
    fun();

    auto fun1 = [](int a=0, int b=1){
                    cout<<"Lambda function executed\t"<<a+b<<endl;
            };
    fun1();

    int x=10;
    auto fun2 = [x](int a, int b){
                cout<<"X: "<<x<<"\ta: "<<a<<"\tb: "<<b<<endl;
            //    x=x+10;//assignment of read-only variable
            };
    fun2(13,40);
    cout<<"X: "<<x<<endl;

    int y=10;
    auto fun3 = [&y](int a, int b){
                cout<<"Y: "<<y<<"\ta: "<<a<<"\tb: "<<b<<endl;
                y=y+10;
            };
    fun3(13,40);
    cout<<"Y: "<<y<<endl;

    int x1=10;
    auto fun4 = [x1](int a, int b)mutable{
                cout<<"X1: "<<x1<<"\ta: "<<a<<"\tb: "<<b<<endl;
                x1+=10;//assignment of read-only variable
                cout<<"X1 inside Lambda:- "<<x1<<endl;
            };
    fun4(13,40);
    cout<<"X1: "<<x1<<endl;

    auto x2 = 10;

    auto fun5 = [](int a, int b){
        return a<b?a:b;
    };
    cout<<fun5(5,4)<<endl;
    return 0;
}
