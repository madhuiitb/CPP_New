#include<iostream>
using namespace std;
#include "integer.h"

// template<typename T>
// void Print(initializer_list<T> args){
//   for(const auto &x : args){
//     cout<<x<<" ";
//   }
// }


//... elipse denotes this will be the type of  variadic template
//template parameter pack
void Print(){
  cout<<"Final variadic template call::- "<<endl;
}
//
template<typename T, typename ...Params>

//Function parameter pack that will be automatically executed by the Compiler
// will use recursion to access the elements
void Print(T a, Params... args){
  // cout<<sizeof...(args)<<endl;
  // cout<<sizeof...(Params)<<endl;
  cout<<a;
  if(sizeof...(args)!=0){
     cout<<",";
  }
  Print(args...);
}

// template<typename T, typename ...Params>
// void Print(const T &a, const Params&... args){
//   // cout<<sizeof...(args)<<endl;
//   // cout<<sizeof...(Params)<<endl;
//   cout<<a;
//   if(sizeof...(args)!=0){
//      cout<<",";
//   }
//   Print(args...);
// }

int main(){
//  Print({1,2,3,4}); // It should be of same type
//  Print({1,2.5f,3,4}); // it will give the error, to overcome that error will use variadic templates
    Print(1,2.5,"A",4.4);
  // Integer val{ 1 };
  // Print(0, val, Integer{ 2 });
  return 0;
}
