#include <iostream>
using namespace std;

template<typename T>
void fun(T x){
  cout << "Value->x: " <<x<<endl;
}

template<typename T, typename U>
void fun(T y , U z){
  cout << "Value->y: " <<y<<endl;
  cout << "Value->z: " <<z<<endl;
}
int main(){
   fun(20);
   fun(2,2.1);
   return 0;
}
