#include<iostream>
#include<thread>

struct funObj{
	// Do something
    void operator()(int params){
        std::cout<<"Foo Obj called\n";
    }
};

int main(){
    // The parameters to the function are put after the comma
    funObj fobj;
    std::thread thread_obj(fobj, 4);
    return 0;
}
