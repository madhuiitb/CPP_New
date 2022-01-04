#include <condition_variable>
#include <functional>
#include <iostream>
#include <future>
#include <vector>
#include <thread>
#include <queue>



class ThreadPool
{
public:
    // Class template
    // std::function is a general-purpose polymorphic function wrapper
    /*
    Instances of std::function can store, copy,
    and invoke any CopyConstructible Callable target --
    functions, lambda expressions, bind expressions, or other function objects,
    as well as pointers to member functions and pointers to data members
    std::function satisfies the requirements of CopyConstructible and CopyAssignable

    You could bind the object to the method
    std::function<void()> doThing = std::bind(&type::isMethod, &object);
    or use a lambda
    std::function<void()> doThing = [&]{object.isMethod();};
    */
    using Task = std::function<void()>;

    //size_t is an unsigned data type of at least 16 bit defined by several C/C++ standards
    ThreadPool(std::size_t numOfThreads) // No of threads in constructor
    {
        start(numOfThreads); // Invoking the function with no of threads
    }

    ~ThreadPool() // Destructor will call stop function to stop the execution
    {
        stop();
    }

    template<class T>
    auto enqueue(T task)->std::future<decltype(task())>
    {
        //std::packaged_task bundles a function and the associated promise for its return type:
        /*
        The class template std::packaged_task wraps any Callable target
        (function, lambda expression, bind expression, or another function object)
        so that it can be invoked asynchronously.
        Its return value or exception thrown is stored in a shared state
        which can be accessed through std::future objects.
        Just like std::function, std::packaged_task is a polymorphic,
        allocator-aware container:
        the stored callable target may be allocated on heap or with a provided allocator.
        */
        auto wrapper = std::make_shared<std::packaged_task<decltype(task()) ()>>(std::move(task));

        {
            /*
            A unique lock is an object that manages a mutex object with
            unique ownership in both states: locked and unlocked
            it guarantees the mutex object is properly unlocked in case an exception is thrown

            */
            std::unique_lock<std::mutex> lock{mutexState};
            /*
            emplace() constructs a new object in-place at the end of the queue.
            It takes as parameters the parameters that the queue's element types constructor takes
            */
            mQueueTask.emplace([=] {
                (*wrapper)();
            });
        }

        cvState.notify_one();
        return wrapper->get_future();
    }

private:
    std::vector<std::thread> threadVector;

    std::condition_variable cvState;

    std::mutex mutexState;

    bool mStopping = false;

    std::queue<Task> mQueueTask;

    void start(std::size_t numOfThreads)
    {
        for (auto i = 0u; i < numOfThreads; ++i)
        {
            threadVector.emplace_back([=] {
                while (true)
                {
                    Task task;

                    {
                        std::unique_lock<std::mutex> lock{mutexState};

                        cvState.wait(lock, [=] { return mStopping || !mQueueTask.empty(); });

                        if (mStopping && mQueueTask.empty())
                            break;

                        task = std::move(mQueueTask.front());
                        mQueueTask.pop();
                    }

                    task();
                }
            });
        }
    }

    void stop() noexcept
    {
        {
            std::unique_lock<std::mutex> lock{mutexState};
            mStopping = true;
        }

        cvState.notify_all();

        for (auto &t : threadVector)
            t.join();
    }
};

int main()
{
    {
        ThreadPool pool{36};
        auto f1 = pool.enqueue([]{
            return 20;
        });

        auto f2 = pool.enqueue([]{
            return 4;
        });
        std::cout<<(f1.get()/f2.get())<<std::endl;
    }


    /*

            std::cout<<"Main Thread ID: "<<std::this_thread::get_id()<<std::endl;
            std::mutex cout_guard;

            ThreadPool tp;
            auto sum=0;
            for(auto i=0; i<10;i++){
                tp.enqueue([&, i=i](){
                    std::unique_lock<std::mutex> ul_m(cout_guard);
                    std::cout<<"Number  "<< i <<"..."<<std::endl;
                    sum+=i;
                    return i;
                });
            }
            std::cout<<"Sum "<<sum<<"\n";
    */

    return 0;
}
