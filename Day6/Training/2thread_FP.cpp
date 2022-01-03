#include<iostream>
#include<thread>

void foo(int param){
    std::cout<<"Foo called\n";
}
int main(){
    // The parameters to the function are put after the comma
    std::thread thread_obj(foo, 3);
    return 0;
}
