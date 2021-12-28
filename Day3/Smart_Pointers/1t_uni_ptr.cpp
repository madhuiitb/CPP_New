#include<iostream>
using namespace std;

void Compute(){
    shared_ptr<int> p(new int);
    cout<<p<<endl;
}

int main(){
    Compute();
}
