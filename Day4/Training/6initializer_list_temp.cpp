#include<iostream>
using namespace std;

template<typename T>
void Print(initializer_list<T> args){
  for(const auto &x : args){
    cout<<x<<" ";
  }
  cout<<"\n";
}
void Print(){
  cout<<"Final variadic template call::- "<<endl;
}

int main(){
  // Print({1,2,3,4}); // It should be of same type
  // Print({1.1,2.2,3.3,4.4}); // It should be of same type
  // Print({1.9f,2.9f,3.9f,4.9f}); // It should be of same type
  // Print({'1','a','f','/'}); // It should be of same type
  // Print({1,2.5f,3,4}); // it will give the error, to overcome that error will use variadic templates
//    Print(1,2.5,"A",4.4);
  // Integer val{ 1 };
  // Print(0, val, Integer{ 2 });
  return 0;
}
