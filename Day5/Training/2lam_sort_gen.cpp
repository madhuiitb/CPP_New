#include<iostream>
using namespace std;

// using Comparator = bool(*)(int, int);
//
// void sort(int *arr, int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }


using Comparator1 = bool (*)(int,int);

template <typename T, int size>
void sort(T (&arr)[size], Comparator1 comp){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(comp(arr[j],arr[j+1])){
                T temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

template<typename T>
bool greater1(T x, T y){
    return x>y;
}

template<typename T>
bool lesser1(T x, T y){
    return x<y;
}



int main(){
    int arr[]{4,1,7,5,3};
    for(auto&x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    sort(arr,greater1);
    for(auto&x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
