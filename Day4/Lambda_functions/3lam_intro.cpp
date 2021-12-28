#include<iostream>
using namespace std;

// It will be for only integer type, we can have template and have many types
// struct forLambda{
//     int operator()(int x, int y)const{
//         return x+y;
//     }
// };

template<typename T>
struct forLambda{
    T operator()(T x, T y)const{
        return x+y;
    }
};
int main(){
    //Lambda Expressions are internally implimented as function object
    // compiler creates a class and overloads the function call operator in it
    // And the overloaded function call operator will contain the implimentation of the body
    //
    // [](){
    //     cout<<"Lambda Expressions are created\n";
    // }();

    auto fun = [](){
        cout<<"Lambda Expressions are created\n";
    };
    fun();
    cout<<typeid(fun).name()<<endl;
    //it will work for only integer types
    // auto sum = [](int x, int y){ //Without return type
    //     return x+y;
    // };

    //it will work for types and it's called generic Lambda if we use AUTO keyword in place type
    // noexcept--> means it does not throw an exception
    // noexcept(false)--> means it does throw an exception
    auto sum = [](auto x, auto y)noexcept{ //Without return type
        return x+y;
    };

    // auto sum = [](int x, int y)->double { //Without return type
    //     if(true)
    //         return 9.0;
    //     return x+y;
    // };

    cout<<"Lambda Sum::-"<<sum(7.6,5.9)<<endl;


    // forLambda fl;
    forLambda<int> fl;
    cout<<"Struct Sum::-"<<fl(4,5)<<endl;
    return 0;
}
