#include<iostream>
#include <thread>
#include "mutex"
#include<condition_variable>
using namespace std;

long balance=0;
std::condition_variable cv;
std::mutex m;
//
void addAmount(int money){
    lock_guard<mutex> lg(m);
    balance+=money;
    cout<<"Amount added, current balance\t"<<balance<<"\n";
    cv.notify_one();
}

void withdrawAmount(int money){
    unique_lock<mutex> ul(m);
    cv.wait(ul, [](){return (balance!=0)?true:false;});
    if(balance>=money){
        balance-=money;
        cout<<"Amount Deducted:- "<<money<<endl;
    }
    else{
        cout<<"No Sufficient Balance\n"<<endl;
    }
    cout<<"Current balance\t"<<balance<<endl;
}

int main(){

    thread t1(withdrawAmount, 500);
    this_thread::sleep_for(std::chrono::seconds(2));
    thread t2(addAmount, 500);
    t1.join();
    t2.join();
    cout<<"t1 and t2 are executing concurrently\n";


    return 0;
}
