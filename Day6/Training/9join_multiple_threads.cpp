#include<iostream>
#include<thread>

void foo(){
    std::cout<<"1_Foo called\n";
}

void foo1(int x){
    std::cout<<"2_Foo called\t"<<x<<"\n";
}

void foo2(int x, int y){
    std::cout<<"\n3_Foo called\tX:- "<<x<<"\tY:- "<<y<<"\n";
}

struct funObj{
    void operator()(){
        std::cout<<"\n1_funObj called\t"<<"\n";
    }
};

struct funObj1{
    void operator()(int x){
        std::cout<<"\n2_funObj called\t"<<x<<"\n";
    }
};

struct funObj2{
    void operator()(int x, int y){
        std::cout<<"\n3_funObj called\tX:- "<<x<<"\tY:- "<<y<<"\n";
    }
};


int main(){
    // The parameters to the function are put after the comma
    std::thread thread_fp1(foo);
    std::thread thread_fp2(foo1, 5);
    std::thread thread_fp3(foo2, 10, 15);

    funObj f0;
    funObj1 f1;
    funObj2 f2;

    std::thread thread_fobj1(f0);
    std::thread thread_fobj2(f1, 3);
    std::thread thread_fobj3(f2, 13, 15);

    thread_fp1.join();
    thread_fp2.join();
    thread_fp3.join();

    thread_fobj1.join();
    thread_fobj2.join();
    thread_fobj3.join();
    return 0;
}
