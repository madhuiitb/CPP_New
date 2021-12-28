#include <iostream>
using namespace std;

template <class T>
class A {
  T a, b;
 public:
  A(T x, T y){
      a=x;
      b=y;
  }
  T getMaxval();
};
template <class T>
T A<T>::getMaxval(){
  return (a>b? a : b);
}

int main () {
  A <int> obj1 (100, 75);
  cout<<"Maximum of 100 and 75 = "<<obj1.getMaxval()<<endl;

  A<char> obj2('a','A');
  cout<<"Maximum of 'A' and 'a' = "<<obj2.getMaxval()<<endl;

  return 0;
}
