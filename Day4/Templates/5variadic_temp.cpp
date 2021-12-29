#include<iostream>
using namespace std;
//#include "integer.h"

// template<typename T>
// void Print(initializer_list<T> args){
//   for(const auto &x : args){
//     cout<<x<<" ";
//   }
// }


//... elipse denotes this will be the type of  variadic template
//template parameter pack
void Print(){
  cout<<"\nFinal variadic template call::- "<<endl;
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
 // return n*fact(n-1); // 4*fact(3)->3*fact(2)->2*fact(1/0)=>1
//Print(3,4,5)-> //a=2,3 => 3,2,
//Print(4,5)-> //a=3,2 => 2,3,
//Print(5)-> //a=4,1 => 1,4,
//Print()-> //a=5,0 => 0,5 =>
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

// int A();
//
// int A(int a);

int main(){
    //A(); 45
    // A(1); 47
 // Print({1,2,3,4}); // It should be of same type
//  Print({1,2.5f,3,4}); // it will give the error, to overcome that error will use variadic templates
    Print(1,2.5,"A",4.4);
//    Print(1,2,3,4,5);
  // Calsi val{1};
 //  Print(0, val, Integer{2});
  return 0;
}
