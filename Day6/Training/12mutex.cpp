#include<iostream>
#include <thread>
#include "mutex"
using namespace std;

int count=0;

std::mutex m;

void addAmount(){
    m.lock();
    count++;
    m.unlock();
}

int main(){

    thread t1(addAmount);
    thread t2(addAmount);
    t2.join();
    cout<<"count:- "<<count<<"\n";
    t1.join();
    cout<<"t1 and t2 are executing concurrently\n";
    return 0;
}
