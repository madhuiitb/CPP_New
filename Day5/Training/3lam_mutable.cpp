#include <iostream>
using namespace std;

int main(){
   int m = 0;
   int n = 0;
   [&, n](int a) mutable {
       m = ++n + a; // 1+4 => 5, 1
    }(4);
   cout << m << endl << n << endl; // 1+4 => 5, 0
}
