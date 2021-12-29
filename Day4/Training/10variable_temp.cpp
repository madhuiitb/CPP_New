#include<iostream>
using namespace std;
#include <limits>
// #def PI 300;
template <typename T>
T pi = T(3.141592653589793238462643383279L);
int main(){
    cout.precision(std::numeric_limits<long double>::max_digits10);
    cout<<pi<int><<endl;
    cout<<pi<float><<endl;
    cout<<pi<double><<endl;
    cout<<pi<long double><<endl;
    return 0;
}
