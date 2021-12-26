#include<iostream>
using namespace std;

// int MAX(int x, int y){
//   if(x>y)
//     return x;
//   return y;
// }
//
// float MAX(float x, float y){
//   return x>y?x:y;
// }


//Primary template
template<class T>
T MAX(T x, T y){
  cout<<"Type Id::- "<<typeid(T).name()<<endl;
  return x>y?x:y;
}
//Explicit Specialization
template char MAX(char a, char b); //Compiler will automatically instantiated this MAX char method
int main(){
  auto max =  MAX(7.5f, 66.6f);
  auto max1 =  MAX(73, 6);
  auto max2 =  MAX(7.5, 66.6);
  auto max3 =  MAX<double>(7, 66.6);
  auto max4 =  MAX(static_cast<float>(7), 66.6f);
  //auto max1 =  MAX(, 6);
  cout<<"Maximum number::- "<<max;
  cout<<"\nMaximum number::- "<<max1;
  cout<<"\nMaximum number::- "<<max2;
  cout<<"\nMaximum number::- "<<max3;
  cout<<"\nMaximum number::- "<<max4;
  return 0;
}
