#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull oddSum=0;
ull evenSum=0;


void findEven(ull start, ull end){
    cout<<"Find Even function called\n";
    cout<<"---------------------------\n";
    for(ull i=start; i<=end; i++){
        if((i&1)==0){
            evenSum+=i;
        }
    }
}
void findOdd(ull start, ull end){
    cout<<"Find Odd function called\n";
    cout<<"---------------------------\n";
    for(ull i=start; i<=end; i++){
        if((i&1)==1){
            oddSum+=i;
        }
    }
}

int main(){
    cout<<"Main started\n";
    cout<<"---------------------------\n";
    ull start=0, end=19000000000;

    auto startTime = high_resolution_clock::now();
    // findOdd(start,end);
    // findEven(start,end);

    thread t1(findEven, start, end);
    thread t2(findOdd, start, end);

    t1.join();
    t2.join();

    auto stopTime = high_resolution_clock::now();
    auto totalTime = duration_cast<microseconds>(stopTime - startTime);

    cout<<"oddSum:- "<<oddSum<<"\n";
    cout<<"evenSum:- "<<evenSum<<"\n";

    cout<<"Time Taken:- "<<totalTime.count()/10000000 << '\n';
    return 0;
}
