#include<iostream>
#include<thread>

void foo(){
    std::cout<<"1_Foo called\n";
}

void foo1(int x){
    std::cout<<"2_Foo called\t"<<x<<"\n";
}

void foo2(int x, int y){ //left side allocation
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
    //foo2(2,3);
    // The parameters to the function are put after the comma
    std::thread t1(foo);
    std::thread t2(foo1, 5);//separed by coma
    std::thread t3(foo2, 10, 15); // start right side initializing

    std::thread t4(funObj);
    std::thread t5(funObj1(), 3);
    std::thread t6(funObj2(), 13, 15);

    auto fun = [](int x, int y){
        std::cout<<"fun called using lambda called\n";
        std::cout<<"X:- "<<x<<"\tY:- "<<y<<std::endl;
    };
    std::thread t7(fun, 3, 5);

    t1.join();
    t2.join();
    t3.join();
    //t4.join();
    t5.join();
    t6.join();
    t7.join();
    return 0;
}
