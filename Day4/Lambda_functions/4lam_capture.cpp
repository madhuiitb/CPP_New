#include<iostream>
using namespace std;

//Function pointers can not be optimized by the compiler
// FP are points to global functions and global functions can not have a state
//Callback has been implimented through function pointers, but can be do by function objects as well

//using Comparator = bool(*)(int, int); //It's an alias
//template<typename T, int size>
template<typename T, int size, typename Comparator>
void Sort(T (&arr)[size], Comparator comp){
    for(int i=0;i<size;i++){
    //    int temp = arr[i];
        for(int j=0;j<size-1;j++){
            if(comp(arr[j], arr[j+1])){
                T temp = move(arr[j]);
                arr[j]=move(arr[j+1]);
                arr[j+1]=move(temp);
            }
        }
    }
}
// These are the predicates for the comparision of the two elements
bool Comp(int x, int y){
    return x>y;
}

bool Comp2(int x, int y){
    return x<y;
}

struct Comp3{
    bool operator()(int x, int y){
        return x>y;
    }
};
int main(){
    //
    // Comp(3,5); //Global function call
    //
    // Comp3 comp; // for comp has an instance, and it will have the state
    // //Member function call
    // comp(5,4); // comp.operator()(5,4); it is an syntatic sugar

    int arr[]{4,7,9,2,5};
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    //Sort(arr, comp);
    //Introducing the Lambda Expressions
    // Sort(arr, );

    auto comp4 = [](auto x, auto y){return x<y; };

    Sort(arr, comp4);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";

    auto comp5 = [](auto x, auto y){return x>y; };
    Sort(arr, comp5);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
