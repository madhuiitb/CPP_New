#include<iostream>
using namespace std;

void Print(int count, char ch){
  for(int i=0;i<count;i++){
    cout<<ch<<" ";
  }
  cout<<endl;
}

void Print1(int count, char ch){
  for(int i=0;i<count;i++){
    cout<<ch<<" ";
  }
  cout<<endl;
}

void EndProgram(){
  cout<<"Program Ended"<<endl;
}

int main(){
  int val =5;
  Print(val, '$');

  atexit(EndProgram);

  void (*funptr) (int, char) = Print;
  funptr(val, '&');
  (*funptr)(8, '*');

  void (*funptr1) (int, char) = &Print1;
  funptr1(val, '&');
  (*funptr1)(8,'8');


}
