#include<iostream>
using namespace std;

class Printer{
  int *ptr;
public:
    void SetValue(int *p){
      ptr = p; //70
    }
    void Print(){
      cout<<"Value is::--- "<<*ptr<<endl;
    }
};


int main(){
  Printer prn;
  int num{};
  cin>>num;
  int *p = new int{num};
  prn.SetValue(p); // 70

  if(*p>50){ //70>50 I will go inside if
    delete p;
    p=nullptr;
  }

  prn.Print();
  delete p;
  return 0;
}
