#include <iostream>

int main()
{
   using namespace std;
   int n = [] (int x, int y) {
       cout<<"Called lambda Expression\n";
        return x + y;
    }(5, 4);
   cout << n << endl;
}
