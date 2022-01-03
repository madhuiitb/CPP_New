#include<iostream>
#include <thread>
using namespace std;

void ThreadFunction1(){
    cout<<"thread_function called\n";
    for(int i=0; i<3; i++){
        cout<<"th1 called\n";
    }
}

void ThreadFunctionValue(int x){
    cout<<"ThreadFunctionValue:- \n"<<x<<"\n"<<endl;
    for(int i=0; i<x; i++){
        cout<<"th2 called\n";
    }
}

int main(){
    thread th1(ThreadFunction1);
    thread th2(ThreadFunctionValue, 5);
    th1.join();
    th2.join();
    cout<<"th1 and th2 are executing concurrently\n";


    return 0;
}
