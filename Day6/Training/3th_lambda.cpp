#include<iostream>
#include<thread>


int main(){
    // The parameters to the function are put after the comma
    auto fun = [](){
        std::cout<<"fun called using lambda called\n";
    };
    std::thread thread_obj(fun);

    std::thread thread_obj1([](){
        std::cout<<"fun called directly lambda called\n";
    });


    return 0;
}
