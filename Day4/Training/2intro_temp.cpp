#include<iostream>
using namespace std;

template<typename T>
T Max(T x, T y){
    cout<<"\nType of T::- "<<typeid(T).name()<<",\t";
    return x>y?x:y;
}

int main(){
    cout<<"Max Int::- "<<Max(115, 101)<<endl;
    cout<<"Max float::- "<<Max(10.15f, 10.1f)<<endl;
    cout<<"Max double1::- "<<Max(1.15, 10.1)<<endl;
    cout<<"Max char::- "<<Max('B', 'b')<<endl;
    //we are providing the return type, so compiler automatically deduced to double
    cout<<"Max double::- "<<Max<double>(11.5, 10)<<endl;
    //we are doing type conversion, so compiler automatically deduced to float
    cout<<"Max float::- "<<Max(static_cast<float>(10), 10.1f)<<endl;

    return 0;
}
