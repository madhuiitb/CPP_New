#include<iostream>
#include<thread>


int main(){
    // The parameters to the function are put after the comma
//[](){};
    auto fun = [](){
        std::cout<<"fun called using lambda called\n";
    };
    std::thread t1(fun);

    std::thread t2([](){
        std::cout<<"fun called directly lambda called\n";
    });

    t1.join();
    t2.join();
    return 0;
}
