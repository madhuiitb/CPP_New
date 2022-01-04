#include<queue>
#include<memory>
#include<stdexcept>
#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<condition_variable>

class ThreadPool{
public:
    // for some reason if you pass ThreadPool as argument to a function by value or by reference
    // this explicit will not use this user defined conversion
    // if you call this constructor with this(3) then it will go out from this.
    explicit ThreadPool(std::size_t numThreads=std::thread::hardware_concurrency()){

    }
    /*
    Non-trival Destructor, program may execution complete then it might terminate
    To kill  execution of the queued threads
    shutdow threads or cleen the queue or wake the threads to until everything is complete
    At the same time it is not accepting the any items which are waiting for queue
    */

    ~ThreadPool(){

    }
    /*
    Need to create the non movable and non CopyAssignable constructors
    */
    ThreadPool(const ThreadPool&)=delete;
    ThreadPool(ThreadPool&&)=delete; // Move constructor
    ThreadPool& operator=(const ThreadPool&)=delete;
    ThreadPool& operator=(ThreadPool&)=delete;

    // To assign the work item to queue, function is taking nothing and having no arguments
    using work_item = std::function<void(void)>;
    // work_item is copy over here, and some other places inside do_work
    // So, let's make a unique_ptr so that we can have ref or move so it will be in only one places
    //
    void do_work(work_item wt){

    }
private:
    using work_item_ptr = std::unique_ptr<work_item>;
    using work_queue = std::queue<work_item_ptr>;

    work_queue wq;
    std::mutex m_lock;
    std::condition_variable m_cv;
    bool m_chek = false;
};


int main(){
    using namespace std;
    ThreadPool tp;

    tp.do_work([](){cout<<"Doing work..."<<endl});
    return 0;
}
