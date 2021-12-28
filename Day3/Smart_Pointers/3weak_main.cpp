#include<iostream>
using namespace std;
#include <memory>

class Printer{
  weak_ptr<int>ptr;
public:
    void SetValue(weak_ptr<int>p){
      ptr = p;
    }
    void Print(){
      if(ptr.expired()){
          cout<<"reference count::-- "<<ptr.use_count()<<endl;
        cout<<"Resource is no longer exists:--"<<endl;
        return;
      }
      auto sp = ptr.lock(); //We need to apply the lock here to lock on weak pointer,
      // lock method will return a shared_ptr, and ref count increment by 1
      cout<<"Value is::--- "<<*sp<<endl;
      cout<<"reference count::-- "<<sp.use_count()<<endl;
      // It will give 2 if the pointer that mentioned is less than 50 o.w it will give ref count 1
      // The above statement is giving an extra mapping of the pointer.
      // We need to avoid that. will look that in other example.
      // The weak pointer is needs to be addressed
    }
};


int main(){
  Printer prn;
  int num{};
  cin>>num;
  shared_ptr<int>p{new int{num}};
  prn.SetValue(p);

  if(*p>50){ //80
    p=nullptr; // p.reset( ) as well it will decrement the Count of the reference
  }
  prn.Print();

  return 0;
}
