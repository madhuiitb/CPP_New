#include<iostream>
#include "cstring"
using namespace std;

void defaultFunctionParameters(int x=20, double y=7.7, float z=9.5f, char c='C');

int main(){
    defaultFunctionParameters(1,2.2,3.5f,'A');
    defaultFunctionParameters(1,2.2,3.5f);
    defaultFunctionParameters(1,2.2);
    defaultFunctionParameters(1);
    defaultFunctionParameters();

    return 0;
}

void defaultFunctionParameters(int x, double y, float z, char c){
    cout<<"Integer::- "<<x<<"\n";
    cout<<"Double::- "<<y<<endl;
    cout<<"Float::- "<<z<<endl;
    cout<<"Char::- "<<c<<endl;
}
