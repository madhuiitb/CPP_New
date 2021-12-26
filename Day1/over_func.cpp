#include<iostream>
using namespace std;

int Add(int x, int y){
    return x+y;
}

double AddDouble(double x, double y){
    return x+y;
}

float AddFloat(float x, float y){

    return x+y;
}

int main(){
    cout<<"Integer::-" << Add(1,2)<<endl;
    cout<<"Double::-" <<AddDouble(1.2, 2.2)<<endl;
    cout<<"Float::-" <<AddFloat(3.1f, 4.5f)<<endl;
    return 0;
}
