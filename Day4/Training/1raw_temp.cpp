#include<iostream>
using namespace std;

int Max(int x, int y){
    return x>y?x:y;
}

float Max(float x, float y){
    return x>y?x:y;
}

double Max(double x, double y){
    return x>y?x:y;
}

char Max(char x, char y){
    return x>y?x:y;
}

int main(){
    cout<<"Max Int::- "<<Max(115, 101)<<endl;
    cout<<"Max float::- "<<Max(10.15f, 10.1f)<<endl;
    cout<<"Max double::- "<<Max(1.15, 10.1)<<endl;
    cout<<"Max char::- "<<Max('B', 'X')<<endl;
    return 0;
}
