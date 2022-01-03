#include<iostream>
#include<thread>
#include<chrono>
#include<future>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;





void findEven(promise<ull>&& evenSumPromise, ull start, ull end){
//    cout<<"Find Even function called\n";
//    cout<<"---------------------------\n";
    ull evenSum=0;
    for(ull i=start; i<=end; i++){
        if((i&1)==0){
            evenSum+=i;
        }
    }
    evenSumPromise.set_value(evenSum);
}
void findOdd(promise<ull>&& oddSumPromise, ull start, ull end){
//    cout<<"Find Odd function called\n";
//    cout<<"---------------------------\n";
    ull oddSum=0;
    for(ull i=start; i<=end; i++){
        if((i&1)==1){
            oddSum+=i;
        }
    }
    oddSumPromise.set_value(oddSum);
}

int main(){
    cout<<"Main started\n";
    cout<<"---------------------------\n";
    ull start=0, end=19000000000;

    auto startTime = high_resolution_clock::now();
    // findOdd(start,end);
    // findEven(start,end);
    promise<ull> oddSum;
    future<ull> oddFuture = oddSum.get_future();

    promise<ull> evenSum;
    future<ull> evenFuture = evenSum.get_future();

    cout<<"Threads Cretead\n";
//    thread t1(findEven, move(oddSum), start, end);
    thread t2(findOdd, move(evenSum), start, end);



    auto stopTime = high_resolution_clock::now();
    auto totalTime = duration_cast<microseconds>(stopTime - startTime);

    cout<<"waiting for results\n";
    //cout<<"oddSum:- "<<oddFuture.get()<<"\n";
    cout<<"evenSum:- "<<evenFuture.get()<<"\n";

//    cout<<"Time Taken:- "<<totalTime.count()/1000000 << '\n';
    cout<<"completed\n";

//    t1.join();
    t2.join();

    return 0;
}
