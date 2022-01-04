class ThreadPool{
public:
    /*
    Need to create the non movable and non CopyAssignable constructors
    */
    ThreadPool(const ThreadPool&)=delete;
    ThreadPool(ThreadPool&&)=delete; // Move constructor
    ThreadPool& operator=(const ThreadPool&)=delete;
    ThreadPool& operator=(ThreadPool&)=delete;
private:
};
