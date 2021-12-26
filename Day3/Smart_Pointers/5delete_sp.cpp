#include<iostream>
using namespace std;
#include<memory>
#include "cstdlib"

struct Free{
  void operator()(int *p){
    free(p);
    cout<<"pointer freed\n";
  }
};

void MallocFree(int *p){
  free(p);
  cout<<"pointer freed using function pointer\n";
}

void UniquePointerDeleter(){
  unique_ptr<int, Free> p{(int*) malloc(4), Free{}};
//  unique_ptr<int, void (*)(int *)> p{(int*)malloc(4), MallocFree};
  *p=100;
  cout<<*p<<endl;
}

void SharedPointerDeleter(){
  shared_ptr<int> p{(int*)malloc(4), Free{}};
//  shared_ptr<int> p{(int*)malloc(4), MallocFree};
  *p=200;
  cout<<*p<<endl;
}

int main(){
 SharedPointerDeleter();
  UniquePointerDeleter();
}
