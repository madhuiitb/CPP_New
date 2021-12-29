#include<iostream>
using namespace std;

template<typename T, int size, typename Callback>
void ForEach(T (&arr)[size], Callback operation){
    for(int i=0;i<size;i++){
        operation(arr[i]);
    }
}
//
template<typename T>
struct testOffset{
    int offset;
    testOffset(int off):offset(off){

    }
    void operator()(T &x){
        x=x+offset;
        ++offset;
    }
};

int main(){

//    testOffset<int> to(3);
    int x=5;
    //to(x);
    int arr[]{4,7,9,2,5};
    ForEach(arr, [](auto x){
        cout<<x<<" ";
    });
    cout<<"\n";
    // int offset = 5;
    // ForEach(arr, [offset](auto &x){
    //     x=x+offset;
    //     cout<<x<<" ";
    // });

    int offset = 5;
    ForEach(arr, [offset](auto &x)mutable{ // To modify any value in the Lambda need to use mutable
        x=x+offset;
        ++offset;
        cout<<x<<" ";
    });
    //
    // ForEach(arr, [](auto x){
    //     cout<<x<<" ";
    // });
    return 0;
}
