#include <iostream>
//using namespace std;

int main() {
    std::cout<<"Enter the Integer Value:: - ";
    int x1;
    std::cin>>x1;
    std::cout<<"Enter the Double Value:: - ";
    double y1;
    std::cin>>y1;
    std::cout<<"Enter the Char Value:: - ";
    char z1;
    std::cin>>z1;

    std::cout << x1 << std::endl;    // print integer
    std::cout << y1 << std::endl;    // print double
    std::cout << "character: " << z1 << std::endl;    // print char
    return 0;
}
