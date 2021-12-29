#include<iostream>
using namespace std;
#include "cstring"

//Primary template
template<typename T>
T MAX(T x, T y){
  cout<<"Type Id::- "<<typeid(T).name()<<endl;
  return x>y?x:y;
}

template<int size>
void Print(){
//  size++; //it will not work
char buffer[size]; // buffer[4]
  cout<<"Non type template::- "<<size<<"\n";
}

template<typename T>
T Sum(T *arr, int size){
  T sum{};
  for(int i=0;i<size;i++){
    sum=sum+arr[i];
  }
  return sum;
}


template<typename T, int size>
T Sum(T (&arr)[size]){
  T sum{};
  for(int i=0;i<size;i++){
    sum=sum+arr[i];
  }
  return sum;
}

int main(){
  int i=2;
// Print<i>();// This will not work;
  //cout<<sizeof(i)<<endl;
  //Print<sizeof(i)>(); // It will give the size of the integer type
 // Print<10>(); // Value will be printed as 10

  // int arr0[]{3,1,5,9}; // int - 4bytes==> 100->3,101, 102, 103, 104->1
  //
  // // template<typename T>
  // // T Sum(T *arr, int size)
  // double arr0[]{3.1,1.1,5.1,9.1};
  //  double sum0 = Sum(arr0, 4);
  //  cout<<"Sum::- "<<sum0<<endl;


// Reference in template for non type templates
  //template<typename T, int size>
 // T Sum(T (&arr)[size])
 // int arr[]{3,1,5,9};
 //  double arr[]{3.1,1.1,5.1,9.1};
 // // auto it = begin(arr); // we can use any of these two for non type templates
 //  double sum = Sum(arr);
 //  cout<<"Sum::- "<<sum<<endl;

  //template<typename T, int size>
 // T Sum(T (&arr)[size])
 int arr1[]{3,11,5,9};
  int (&ref)[4]=arr1; // Reference in template for non type templates
  int sum1 = Sum(arr1);
  cout<<"Sum::- "<<sum1<<endl;
}
