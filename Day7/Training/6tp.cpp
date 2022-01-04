#include<queue>
#include<memory>
#include<stdexcept>
#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<condition_variable>
#include<vector>
#include<chrono> //
#include<functional>

class ThreadPool{
public:
    // for some reason if you pass ThreadPool as argument to a function by value or by reference
    // this explicit will not use this user defined conversion
    // if you call this constructor with this(3) then it will go out from this.
    explicit ThreadPool(std::size_t threadCount=std::thread::hardware_concurrency()){
        //Given thread count
        if(!threadCount) throw std::invalid_argument("Bad, thread count must not be zero\n");

        std::cout<<"Creating "<<threadCount<<"\tPool Threads..."<<std::endl;
        for(auto i=0; i<threadCount;i++){
            m_vectorThreads.push_back(std::thread([this](){
                std::cout<<"\nPool Thread "<<std::this_thread::get_id()<<" Starting..."<<std::endl;
                //std::cout<<"Thread id:-\t"<<std::this_thread::get_id()<<std::endl;
                using namespace std::chrono;
                std::this_thread::sleep_for(1s);
                std::cout<<"\nPool Thread "<<std::this_thread::get_id()<<" Stopping..."<<std::endl;
            //    std::cout<<"\nPool Thread Stopping..."<<std::endl;
            }));
        }
    }
    /*
    Non-trival Destructor, program may execution complete then it might terminate
    To kill  execution of the queued threads
    shutdow threads or cleen the queue or wake the threads to until everything is complete
    At the same time it is not accepting the any items which are waiting for queue
    */

    ~ThreadPool(){
        for(auto& t: m_vectorThreads)
            t.join(); //joining threads
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

    using threadVector = std::vector<std::thread>;
    threadVector m_vectorThreads;
};


int main(){
    using namespace std;
    ThreadPool tp;

    cout<<"Main Thread ID: "<<this_thread::get_id()<<endl;
    tp.do_work([](){
        cout<<"Doing work..."<<endl;
    });
    return 0;
}
