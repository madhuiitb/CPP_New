#include<iostream>
#include <thread>
#include "mutex"
#include<condition_variable>
using namespace std;

long balance=0;//500
std::condition_variable cv;
std::mutex m;
//
void addAmount(int money){
    lock_guard<mutex> lg(m);
    balance+=money;
    cout<<"Amount added, current balance\t"<<balance<<"\n";
    cv.notify_one(); //notify_all();
}

void withdrawAmount(int money){
    unique_lock<mutex> ul(m); // 0!=0
    cv.wait(ul, [](){return (balance!=0)?true:false;});
    if(balance>=money){ //500>==600
        balance-=money;
        cout<<"Amount Deducted:- "<<money<<endl;
    }
    else{
        cout<<"No Sufficient Balance\n"<<endl;
    }
    cout<<"Current balance\t"<<balance<<endl;
}

int main(){ // main is also a thread

    thread t1(withdrawAmount, 600);
    this_thread::sleep_for(std::chrono::seconds(10));
    thread t2(addAmount, 500);
    t1.join();
    t2.join();
    cout<<"t1 and t2 are executing concurrently\n";
    return 0;
}
