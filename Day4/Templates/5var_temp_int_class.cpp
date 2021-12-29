#include<iostream>
using namespace std;
//#include "integer.h"

class Integer {
	int *m_pInt;
public:
	//Default constructor
	Integer(){
    	std::cout << "Integer()" << std::endl;
    	m_pInt = new int(0);
    }
	//Parameterized constructor
	Integer(int value){
    	std::cout << "Integer(int)" << std::endl;
    	m_pInt = new int(value);
    }
	//Copy constructor
	Integer(const Integer &obj){
    	std::cout << "Integer(const Integer&)" << std::endl;
    	m_pInt = new int(*obj.m_pInt);
    }
	//Move constructor
	//Integer(Integer &&obj);
	int GetValue()const{
    	return *m_pInt;
    }
	void SetValue(int value) {
    	*m_pInt = value;
    }
	~Integer(){
    	std::cout << "~Integer()" << std::endl;
    	delete m_pInt;
    }
    friend std::ostream & operator <<(std::ostream & out, const Integer &obj);
};
ostream & operator<<(ostream & out, const Integer & obj)
{
	out << *obj.m_pInt;
	return out;
}
// template<typename T>
// void Print(initializer_list<T> args){
//   for(const auto &x : args){
//     cout<<x<<" ";
//   }
// }


//... elipse denotes this will be the type of  variadic template
//template parameter pack
void Print(){
  cout<<"Final variadic template call::- "<<endl;
}

template<typename T, typename ...Params>

//Function parameter pack that will be automatically executed by the Compiler
// will use recursion to access the elements
void Print(T a, Params... args){
  cout<<sizeof...(args)<<endl;
  cout<<sizeof...(Params)<<endl;
  cout<<a;
  if(sizeof...(args)!=0){
     cout<<"\n";
  }
  Print(args...);
}

//
// void Print(const T &a, const Params&... args){
//   // cout<<sizeof...(args)<<endl;
//   // cout<<sizeof...(Params)<<endl;
//   cout<<a;
//   if(sizeof...(args)!=0){
//      cout<<",";
//   }
//   Print(args...);
// }

int main(){
 // Print({1,2,3,4}); // It should be of same type
 // Print({1,2.5f,3,4}); // it will give the error, to overcome that error will use variadic templates
//  Print(1,2.5,"A",4.4);
  Integer val{ 1 };
  Print(0, val, Integer{ 2 });
  return 0;
}
