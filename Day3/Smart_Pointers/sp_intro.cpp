#include"sp_intro.h"
using namespace std;

Integer::Integer(){
  cout<<"---::Integer Default  Constructor called::---"<<endl;
  ptr = new int(0);
}
  Integer::Integer(int val){
    cout<<"---::Integer Parameterized  Constructor called::---"<<endl;
    ptr = new int(val);
  }

  Integer::Integer(const Integer &obj){
    cout<<"---::Integer Copy  Constructor called::---"<<endl;
    ptr = new int(*obj.ptr);

  }
// Integer Integer:: operator+(const Integer &a)const{
//     Integer temp;
//     *temp.ptr = *ptr + *a.ptr;
//     return temp;
//   }

Integer & Integer :: operator++(){
  ++(*ptr);
  return *this;
}


Integer  Integer :: operator++(int){
  Integer temp(*this);
  ++(*ptr);
  return temp;
}

bool  Integer :: operator==(const Integer &obj)const{
  return *ptr == *obj.ptr;
}

Integer & Integer :: operator=(const Integer &obj){
  if(this!=&obj){
    delete ptr;
    ptr = new int (*obj.ptr);
  }
  return (*this);
}


Integer & Integer :: operator=(Integer &&obj){
  if(this!=&obj){
    delete ptr;
    ptr = obj.ptr;
    obj.ptr = nullptr;
  }
  return (*this);
}

// //Move Constructor
// Integer :: Integer(Integer &&obj){
//     ptr = obj.ptr;
//     obj.ptr = nullptr;
// }


void Integer :: operator ()(){
  cout<<"Function overload operator::- "<<*ptr<<endl;
}

  int Integer::GetValue()const{
    return *ptr;
  };
  void Integer::SetValue(int val){
    *ptr=val;
  }

  Integer::~Integer(){
    cout<<"---::Integer Destructor called::---"<<endl;
    delete ptr;
  }
