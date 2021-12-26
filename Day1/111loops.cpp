#include <iostream>

using namespace std;

int main() {
        for (int i = 0; i <= 5; ++i) {
        cout << i << " ";
    }
    cout<<"\n";
     int i{};
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    cout<<"\n";
    i =0;
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);

    return 0;
}
