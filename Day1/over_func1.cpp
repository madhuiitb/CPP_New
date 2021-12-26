#include<iostream>
using namespace std;

int Add(int x, int y){
    return x+y;
}

double Add(double x, double y){
    return x+y;
}





int main(){
    cout<<"Integer value::- "<<Add(1,2)<<endl;
    cout<<"Double Value: "<<Add(1.2, 2.3)<<endl;
}
