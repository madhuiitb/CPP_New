#include<stdexcept>

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
private:
};
