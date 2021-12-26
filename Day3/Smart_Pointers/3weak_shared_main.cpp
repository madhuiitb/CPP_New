#include<iostream>
using namespace std;
#include <memory>

class Printer{
  shared_ptr<int>ptr;
public:
    void SetValue(shared_ptr<int>p){
      ptr = p;
    }
    void Print(){
      
      cout<<"reference count::-- "<<ptr.use_count()<<endl;  // It will give 2 if the pointer that mentioned is less than 50 o.w it will give ref count 1
      // The above statement is giving an extra mapping of the pointer.
      // We need to avoid that. will look that in other example.
      // The weak pointer is needs to be addressed
      cout<<"Value is::--- "<<*ptr<<endl;
    }
};


int main(){
  Printer prn;
  int num{};
  cin>>num;
  shared_ptr<int>p{new int{num}};
  prn.SetValue(p);

  if(*p>50){
    p=nullptr; // p.rese( ) as well it will decrement the Count of the reference
  }
  prn.Print();

  return 0;
}
