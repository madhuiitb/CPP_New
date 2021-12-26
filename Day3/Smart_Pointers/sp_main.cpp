#include<iostream>
using namespace std;
#include "sp_intro.h"

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

// void CreateInteger(){
//   Integer *p = new Integer;
//   p->SetValue(3);
//   cout<<"CreateInteger Class for accessing the values::--- "<<p->GetValue()<<endl;
//   delete p; //In large programs we might not remember all the pointer and delete operations wrt to that pointer
// }

void CreateInteger(){
  IntPtr p = new Integer; // It need not be a pointer, it will be acting as an object
   p->SetValue(3); //  Integer * operator->()
   cout<<"CreateInteger Class for accessing the values::--- "<<p->GetValue()<<endl;
   (*p).SetValue(30); //Integer & operator*

   cout<<"CreateInteger Class for accessing the values::--- "<<(*p).GetValue()<<endl;
  // delete p; //In large programs we might not remember all the pointer and delete operations wrt to that pointer
}

int main(){
  CreateInteger();

  return 0;
}
