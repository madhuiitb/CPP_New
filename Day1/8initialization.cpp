#include<iostream>
#include <string>
int main(){
    int x1; // Uninitialized
    int x2 = 5; // Copy initialization
    int x3(15); // Direct initialization and it will take lot of time
    std::cout<<"TEST::- "<<x2<<std::endl;
//    std::cout<<"TEST::- "<<x3<<std::endl;

    /*
    // It is a user defined data type
    So It will think that it has created the object for the string.
    */
    std::string s1;
    std::string s2("Cpp"); //Direct initialization
    std::cout<<"TEST::- "<<s2<<std::endl;

    char c1[24]; //Uninitialization
    char c2[24]={'\0'};
    char c3[24]={'a','b','c'}; //Aggrigate initialization
    char c4[24]={"abcd"};

    /*
    // It will be Uninitialized with Default value i.e 0 for the integers
    */
    int y1{} ;  //Value initialization i.e Default
    /*
    You may think that it will initialized with the Default Value
    but it's not,
    it will create a function called y2, with no parameters i.e void
    and it returns integer type
    And it's called most vaxing parser ---NOW these are not there
    */
    int y2();

    int y3{20}; //Direct initialization

    char temp[8]{};
    char temp1[8]{"Hi"};

    /*
    HEAP Based objects
    */

    int *p1 = new int{};

    char *p2 = new char[8]{}; // Array initialization it automatically initializes all the values

    char *p3= new char[8]{"Hiii"};

    return 0;
}
