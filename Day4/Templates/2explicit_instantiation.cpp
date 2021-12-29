#include<iostream>
using namespace std;
#include "cstring"

//Primary template
template<typename T>
T MAX(T x, T y){
  cout<<"Type Id::- "<<typeid(T).name()<<endl;
  return x>y?x:y;
}
//Explicit instantiated
//template char MAX(char a, char b); //Compiler will automatically instantiated this MAX char method
//
// //Explicit Specialization
template<>
const char* MAX(const char *a, const char *b){
  cout<<"Explicit template instantiated called::-- "<<endl;
  return strcmp(a,b)>0?a:b;
}

// template<>
// const char* MAX<const char*>(const char &a, const char &b){
//   cout<<"Explicit template instantiated called::-- "<<endl;
//   return strcmp(a,b)>0?a:b;
// }

int main(){
  const char *a{"b"};
  const char *b{"A"};
  auto max1 =  MAX(a,b);
  cout<<"Maximum number::- "<<max1;
  return 0;
}
