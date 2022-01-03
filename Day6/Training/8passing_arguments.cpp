#include<iostream>
#include<thread>

void foo(){
    std::cout<<"1_Foo called\n";
}

void foo1(int x){
    std::cout<<"2_Foo called\t"<<x<<"\n";
}

void foo2(int x, int y){
    std::cout<<"3_Foo called\tX:- "<<x<<"\tY:- "<<y<<"\n";
}

struct funObj{
    void operator()(){
        std::cout<<"1_funObj called\t"<<"\n";
    }
};

struct funObj1{
    void operator()(int x){
        std::cout<<"2_funObj called\t"<<x<<"\n";
    }
};

struct funObj2{
    void operator()(int x, int y){
        std::cout<<"3_funObj called\tX:- "<<x<<"\tY:- "<<y<<"\n";
    }
};


int main(){
    // The parameters to the function are put after the comma
    std::thread thread_fp1(foo);
    std::thread thread_fp2(foo1, 5);
    std::thread thread_fp3(foo2, 10, 15);

    std::thread thread_fobj1(funObj);
    std::thread thread_fobj2(funObj1(), 3);
    std::thread thread_fobj3(funObj2(), 13, 15);

    auto fun = [](int x, int y){
        std::cout<<"fun called using lambda called\n";
        std::cout<<"X:- "<<x<<"\tY:- "<<y<<std::endl;
    };
    std::thread thread_obj(fun, 3, 5);



    return 0;
}
