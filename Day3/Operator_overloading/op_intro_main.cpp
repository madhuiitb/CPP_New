#include<iostream>
using namespace std;
#include "op_intro.h"
#include<memory>

// Normal function
Integer Add(const Integer &a, const Integer &b){
  Integer temp;
  temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}

// Global operator overloading function
Integer operator+(const Integer &a, const Integer &b){
  Integer temp;
  temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}

// ostream & operator << (ostream & out, const Integer &a){
//   out<< a.GetValue();
//   return out;
// }
//
// istream & operator << (istream & input, const Integer &a){
//   int x;
//   input>>x;
//   a.SetValue();
//   return input;
// }
//
// istream & operator << (istream & input, const Integer &a){
//   int x;
//   input>>x;
//   *a.ptr=x;
//   return input;
// }


int main(){
  Integer a(7), b(3);
  Integer sum = a + b;
  ++sum;

  cout<<"Sum of the two::- "<<(sum++).GetValue()<<endl;
  if(a==b){
    cout<<" Both values are same::- "<<endl;
  }
  else{
    cout<<"Both values are not same"<<endl;
  }

  Integer c;
  c=a; // Assignment operator
  b=b; // L Value and R-values are same
  a(); // Function overloading
  cout<<"End of program:- "<<b.GetValue()<<endl;

  return 0;
}
