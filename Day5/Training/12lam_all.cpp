///Parts of a lambda expression

#include <algorithm>
#include <cmath>
#include<iostream>
void abssort(float* x, unsigned n) {
    std::sort(x, x + n,
        // Lambda expression begins
        [](float a, float b) {
            return (abs(a) <abs(b));
        } // end of lambda expression
    );
}

int main(){
    float x =2.4f;
    abssort(&x, -4);
    return 0;
}


/*
1. capture clause (Also known as the lambda-introducer in the C++ specification.)
struct S { void f(int i); };
void S::f(int i) {
    [&, i]{};      // OK
    [&, &i]{};     // ERROR: i preceded by & when & is the default
    [=, this]{};   // ERROR: this when = is the default
    [=, *this]{ }; // OK: captures this by value. See below.
    [i, i]{};      // ERROR: i repeated
}

A capture followed by an ellipsis is a pack expansion, as shown in this variadic template example:
template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}

2. parameter list Optional. (Also known as the lambda declarator)
Lambdas can both capture variables and accept input parameters.
auto y = [] (int first, int second)
{
    return first + second;
};
c++14
parameter type is generic, you can use the auto keyword as the type specifier
A lambda expression can take another lambda expression as its argument
auto y = [] (auto first, auto second)
{
    return first + second;
};

3. mutable specification Optional.==>
To modify anything in the lambda expression but not originally


4. exception-specification Optional.



int main() // C4297 expected
{
   []() noexcept { throw 5; }();
}

5. trailing-return-type Optional.
auto x1 = [](int i){ return i; }; // OK: return type is int
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing
                                  // return type from braced-init-list isn't valid

6. lambda body.
#include <iostream>
using namespace std;

int main()
{
   int m = 0;
   int n = 0;
   [&, n] (int a) mutable {
   m = ++n + a; // 1+4 => 5, 1
    }(4);
   cout << m << endl << n << endl;
}


int y = 32;
    auto answer = [y]() constexpr
    {
        int x = 10;
        return y + x;
    };

    constexpr int Increment(int n)
    {
        return [n] { return n + 1; }();
    }
*/
