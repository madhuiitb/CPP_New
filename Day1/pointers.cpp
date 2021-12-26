#include<iostream>
using namespace std;

void swap(int *a, int *b){
    cout<< a <<" "<< b<<" \n";
    cout<< *a <<" "<< *b<<" \n";

    int *temp =a;
    a = b;
    b = temp;

    cout<< a <<" "<< b<<" \n";
    cout<< *a <<" "<< *b<<" \n";
}

int main(){
    int x=10;
    int y=20;
    cout<<"X value::- "<<x<<endl;
    cout<<"X Address::- "<<&x<<endl;

    cout<<"Y value::- "<<y<<endl;
    cout<<"Y Address::- "<<&y<<endl;

    int *p1;
    p1 = &x;
    int *p2;
    p2= &y;

    //cout<< "Before Swap::\n"<<*p1 <<" "<< *p2<<" \n";

    swap(p1,p2);
    //cout<< "After Swap::\n"<<*p1 <<" "<< *p2<<" \n";

//     cout<<"P1 value::- "<<p1<<endl;
//     cout<<"P1 value::- "<<*p1<<endl;
//     cout<<"P1 Address::- "<<&p1<<endl;
//
//     cout<<"P2 value::- "<<p2<<endl;
//     cout<<"P2 value::- "<<*p2<<endl;
//     cout<<"P2 Address::- "<<&p2<<endl;
//
//     int *temp = p1;
//     p1 = p2;
//     p2 = temp;
//
//     cout<<"After SWAP ::::-------\n";
//     cout<<"P1 value::- "<<p1<<endl;
//     cout<<"P1 value::- "<<*p1<<endl;
//     cout<<"P1 Address::- "<<&p1<<endl;
//
// //    cout<<&x<<p1<<endl;
//     //swap(p1, p2);
//     cout<<*p1<<*p2<<endl;
    return 0;
}
