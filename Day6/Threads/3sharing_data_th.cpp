#include<iostream>
#include<list>
#include<string>
#include<thread>
using namespace std;

list<int> g_Data;
const int SIZE=1000;

void Download(){
    for(int i=0;i<SIZE;i++){
        g_Data.push_back(i);
    }
}

void Download2(){
    for(int i=0;i<SIZE;i++){
        g_Data.push_back(i);
    }
}

int main(){
    thread thDown(Download);
    thread thDown2(Download2);
    thDown.join();
    thDown2.join();
    return 0;
}
