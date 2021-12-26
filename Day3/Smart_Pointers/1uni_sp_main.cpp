#include<iostream>
#include "sp_intro.h"
using namespace std;
#include<memory>

void Display(Integer *p){
  if(!p){
    return;
  }
  cout<<"Display Value::--- "<<p->GetValue()<<endl;
}

Integer *GetPointer(int val){   // Return Type Integer pointer
  Integer *p = new Integer{val};
  return p;
}

void Store(unique_ptr<Integer> p){
  cout<<"Storing the data into a file::----- "<<p->GetValue()<<endl;
}

void Store1(unique_ptr<Integer> &p){
  cout<<"Storing the data into a file::----- "<<p->GetValue()<<endl;
}
void Operate(int val){
  unique_ptr<Integer> p{GetPointer(val)};
  if(p==nullptr){
    //p = new Integer{val};
    p.reset(new Integer{val});
  }
  p->SetValue(200); // Have already defined the SetValue() in the sp_intro.h it will set the value to 200
//  Display(p); // Calling the Display function for to Display the Value of the pointer
  Display(p.get()); // Display func is having raw pointer so using GET(), Calling the Display function for to Display the Value of the pointer
//  delete p; // When you created the mememory you have to delete every time
//  p=nullptr; //Assignment to null for the Good practices

//  p = new Integer{};
  p.reset(new Integer{}); //RESET will clear the memory and it will assign the new memory
  *p = __LINE__; // In C++ it will take the line number i.e it's a MACRO
  Display(p.get());
  //delete p; //If we are not doing this then Destructor will not be called.
//  p=nullptr;
//  Store(p); // It throws an error: use of deleted function i.e p will be deleted after this function
//  Store(move(p));

  Store1(p); //With reference you can use this always.
}

int main(){ 
  Operate(100);
  return 0;
}
