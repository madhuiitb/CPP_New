#include<iostream>
#include<thread>
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

     thread t1(ThreadFunction1);
     thread t2(ThreadFunctionValue, 5);
    //
    // ThreadFunction1(); //t1
    // ThreadFunctionValue(3); //t2
    cout<<"th1 and th2 are executing concurrently\n";
    t1.join(); // Wait till I finish the process
    t2.join(); // wait 
    return 0;
}
