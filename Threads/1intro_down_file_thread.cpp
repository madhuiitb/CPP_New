#include <iostream>
#include <list>
#include <thread>
////using namespace std;
//#include<thread>

std::list<int> g_Data; //It is a Data Structure
const int SIZE = 5000000;


void Download(){
    std::cout<<"Downloader started Download"<<std::endl;
    for(int i=0;i<SIZE;i++){
        g_Data.push_back(i);
    }
    std::cout<<"Downloader Finished Download"<<std::endl;
}


int main(){

    std::cout<<"Main user started an Operation"<<std::endl;
    std::thread thDownloader(Download());
    //Download();
    std::cout<<"Main user started another Operation"<<std::endl;
    thDownloader.join();
    return 0;

}
