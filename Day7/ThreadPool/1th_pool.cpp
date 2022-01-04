#include "1pool.h"
#include <iostream>

int main(){

    ThreadPool& pool = ThreadPool::getInstance(4); //create pool with 4 threads

    auto testFunc = [](int x){ return x*x; };

    auto returnValue = pool.push(testFunc, 5);

    std::cout << returnValue.get() << std::endl;

    return 0;
}
