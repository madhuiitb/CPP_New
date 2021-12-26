#include<iostream>
using namespace std;
#include "cstring"

// int MAX(int x, int y){
//   if(x>y)
//     return x;
//   return y;
// }
//
// float MAX(float x, float y){
//   return x>y?x:y;
// }


//Primary template
template<typename T>
T MAX(T x, T y){
  cout<<"Type Id::- "<<typeid(T).name()<<endl;
  return x>y?x:y;
}
//Explicit instantiated
template char MAX(char a, char b); //Compiler will automatically instantiated this MAX char method

//Explicit Specialization
template<> const char* MAX(const char *a, const char *b){
  cout<<"Explicit template instantiated called::-- "<<endl;
  return strcmp(a,b)>0?a:b;
}
//
// template<> const char* MAX<const char*>(const char &a, const char &b){
//   cout<<"Explicit template instantiated called::-- "<<endl;
//   return strcmp(a,b)>0?a:b;
// }


template<int size>

void Print(){
//  size++; //it will not work
char buffer[size];
  cout<<"Non type template::- "<<size<<"\n";
}

// template<typename T>
// T Sum(T *arr, int size){
//   T sum{};
//   for(int i=0;i<size;i++){
//     sum=sum+arr[i];
//   }
//   return sum;
// }

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
  //  Print<i>();// This will not work;
  Print<sizeof(i)>();
  Print<10>();

  int arr[]{3,1,5,9};
  auto it = begin(arr); // we can use any of these two for non type templates
  //int (&ref)[4]=arr; // Reference in template for non type templates
  int sum = Sum(arr);
  cout<<"Sum::- "<<sum<<endl;
}
