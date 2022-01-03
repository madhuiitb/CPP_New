#include <thread>
#include <iostream>
#include<Windows.h>

struct F1
{
  void operator() () const
  {
    std::cout<<"Printing from another thread"<<std::endl;
  }
};

int main()
{
  F1 f1;
  std::thread t(f);
  t.join();

  return 0;
}