#include <iostream>
using namespace std;

int Square(int x){
  return x*x;
}

# define Square1(x) x*x

# define Square2(x) x*x

inline int Square3(int x){
  return x*x;
}

int main(){
  int val = 5;
  int result = Square(val);
  cout<<"Square Value::- "<<result<<endl;

  int result1 = Square1(val);
  cout<<"Square2 Value::- "<<result1<<endl;

  int result2 = Square1(val+1);
  cout<<"Square2 Value::- "<<result2<<endl;

  int result3 = Square3(val+1);
  cout<<"Square3 Value::- "<<result3<<endl;
}
