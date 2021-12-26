#include<iostream>
using namespace std;
#include "sp_intro.h"
#include <memory>

class IntPtr{
  Integer *p_p;
public:
  IntPtr(Integer *p):p_p(p){

  }
  ~IntPtr(){
    delete p_p;
  }
  Integer * operator->(){
    return p_p;
  }

  Integer & operator*(){
    return *p_p;
  }

};

void Process1(unique_ptr<Integer> ptr){
  cout<<ptr->GetValue()<<endl;
}


void Process2(shared_ptr<Integer> ptr){
  cout<<ptr->GetValue()<<endl;
}

// void CreateInteger(){
//   Integer *p = new Integer;
//   p->SetValue(3);
//   cout<<"CreateInteger Class for accessing the values::--- "<<p->GetValue()<<endl;
//   delete p; //In large programs we might not remember all the pointer and delete operations wrt to that pointer
// }

void CreateInteger(){
  unique_ptr<Integer> p(new Integer);
  shared_ptr<Integer> p2(new Integer);

   p->SetValue(3); //  Integer * operator->()'
     cout<<"CreateInteger Class for accessing the values::--- "<<p->GetValue()<<endl;
//   Process(p); //You can not pass this unique_ptr to another function, you can pass it only when you transfer the ownership of that pointer
      Process1(move(p));

        Process2(p2);

   (*p).SetValue(30); //Integer & operator*

   cout<<"CreateInteger Class for accessing the values::--- "<<(*p).GetValue()<<endl;
  // delete p; //In large programs we might not remember all the pointer and delete operations wrt to that pointer



}

int main(){
  CreateInteger();

  return 0;
}
