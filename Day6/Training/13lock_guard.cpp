#include<iostream>
#include <thread>
#include "mutex"
using namespace std;

int count=0;

std::mutex m1;
void task(const char* threadNumber, int loopFor){
    lock_guard<mutex> lock(m1);
    //m.lock();
    for(int i=0;i<loopFor;i++){
        count++;
        cout<<threadNumber<<"\t"<< count<<endl;
    }

    //m.unlock();
}

int main(){

    thread t1(task, "T0", 10);
    thread t2(task, "T1", 10);
    cout<<"count:- "<<count<<"\n";
    t1.join();
    t2.join();
    cout<<"t1 and t2 are executing concurrently\n";


    return 0;
}
