#include<iostream>
#include<thread>

struct funObj{
	// Do something
    void operator()(){
        std::cout<<"Foo Obj called\n";
    }
};

int main(){
    // The parameters to the function are put after the comma
    funObj fobj;
    std::thread t1(fobj);
    t1.join();
    return 0;
}
