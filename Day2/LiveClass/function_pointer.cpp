#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}


int main(){

    int (*fun)(int, int);

    fun = add;

    cout<<"Add Values::- "<<fun(5,9)<<endl;


    return 0;
}
