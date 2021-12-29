// nesting_lambda_expressions.cpp
// compile with: /EHsc /W4
#include <iostream>
using namespace std;

int main(){
    // The following lambda expression contains a nested lambda
    // expression.
    int timestwoplusthree = [](int x){
        cout<<"X: "<<x<<endl;
        return [](int y){
            return y * 2;
        }(x) + 3;  // inner lambda is calling with x and then adding 3
    }(5); // outer lambda fun calling with 5

    // Print the result.
    cout << timestwoplusthree << endl;

   //  auto addtwointegers = [](int x) -> function<int(int)> {
   //     return [=](int y){
   //         return x + y;
   //     };
   // };
}
