#include<iostream>
using namespace std;

// Function pointers can not be optimized by the compiler
// FP are points to global functions and
// global functions can not have a state
// Callback has been implimented through function pointers
// but can be done by using function objects as well

using Comparator = bool(*)(int, int);

template<typename T, int size> // a=3, b=4
    //arr, comp=greater
void Sort(T (&arr)[size], Comparator comp){
    for(int i=0;i<size;i++){
    //    int temp = arr[i];
        for(int j=0;j<size-1;j++){
            //if(arr[0]>arr[0+1]) // 4>7 => 0
            if(comp(arr[j], arr[j+1])){
                T temp = move(arr[j]);
                arr[j]=move(arr[j+1]);
                arr[j+1]=move(temp);
            }
        }
    }
}
// These are the predicates for the comparision of the two elements
bool greater1(int x, int y){
    return x>y; //4>7=>0
}

bool Comp2(int x, int y){
    return x<y;
}


int main(){
    //max1(2,3);

    int arr[]{4,7,9,2,5};
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    Sort(arr, Comp2);
//    Sort(3,4)
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
