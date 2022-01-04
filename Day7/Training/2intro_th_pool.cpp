#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<condition_variable>

class ThreadPool{ //resource owning object, and it should not copy or assign values.
    // For that need to constructors to be for the same
    //Non copyble, not movable
public:

private:
};

int main(){
    using namespace std;
    ThreadPool tp;
    return 0;
}
