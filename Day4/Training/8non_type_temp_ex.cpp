#include<iostream>
using namespace std;

template <string* T> //pointer to object
void fun()
{
   cout << *T << endl;
}

template <string& U> //reference to object
void gun()
{
     cout << U << endl;
     U += "...appended some string";
}

string str1; //must not be local as it must have external linkage!

int main() {
        str1 = "can assign values locally";
        fun<&str1>(); // We are accessing by pointer
        gun<str1>(); // We are accessing by reference
        cout << str1 << endl; // last line which prints after U appended
        return 0;
}
