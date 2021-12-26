#include<iostream>
#include "sp_intro.h"
using namespace std;

void Display(Integer *p){
  if(!p){
    return;
  }
  cout<<"Display Value::--- "<<p->GetValue()<<endl;
}

Integer *GetPointer(int val){ // Return Type Integer pointer
  Integer *p = new Integer{val};
  return p;
}
void Operate(int val){
  Integer *p = GetPointer(val);
  if(p==nullptr){
    p = new Integer{val};
  }
  p->SetValue(200); // Have already defined the SetValue() in the sp_intro.h it will set the value to 200
  Display(p); // Calling the Display function for to Display the Value of the pointer
  delete p; // When you created the mememory you have to delete every time
  p=nullptr; //Assignment to null for the Good practices

  p = new Integer{};
  *p = __LINE__; // In C++ it will take the line number i.e it's a MACRO
  Display(p);
  //delete p; //If we are not doing this then Destructor will not be called.
//  p=nullptr;
}

int main(){
  Operate(100);
  return 0;
}
