#include <iostream>
#include <cstdlib>
#include <thread>
//#include "create_pool.h"
using namespace std;
#define trace(x)
// function to define the number of threads
auto num_threads = thread::hardware_concurrency();
//checking condition of the number of threads available
// if the number of threads is 0
if(num_threads == 0){
    num_threads =1;
}
const int total_task = 20000;
//main logic inside the main function with 2 arguments

int main(){
    srand((unsigned int)time(NULL));
    //creating a thread pool
    thread_pool p;
    //enqueue function used to queue the request that needs to be processed by
    //thread pool and retrieving the output in 'output' variable
    auto output = p.enqueue_task([](int x) { return x; }, 0xFF);
    output.get();

    //processing the request
    for(int x = 1; x <= num_threads; x++)
    p.enqueue_work([](int thread_number) {
        int work_out = 0;
        int work = total_task + (rand() % (total_task));
        trace("Thread " << thread_number << "is going to start " << work );
        for(int y = 0; y < work; y++)
            work_out += rand();
        trace("Execution of " << thread_number << " is ended");
        },
    x);
    return 0;
}
