

int numThreads = std::thread::hardware_concurrency();
std::vector<thread> threads;
for(int i=0;i<numThreads;i++){
    pool.push_back(std::thread(infinite_loop));
}
