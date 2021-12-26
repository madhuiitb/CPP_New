#include<iostream>
using namespace std;

class Printer{
  int *ptr;
public:
    void SetValue(int *p){
      ptr = p;
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
  prn.SetValue(p);

  if(*p>50){
    delete p;
    p=nullptr;
  }
  prn.Print();
  delete p;
  return 0;
}
