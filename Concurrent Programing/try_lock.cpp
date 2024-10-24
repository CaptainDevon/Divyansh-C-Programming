#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mtx;
int counter=0;
void increaseTheCountFor100000Time()
{
    
    for(int i=0;i<100000;i++)
    {
        mtx.lock();
        /*if(mtx.try_lock())
        {
            ++counter;
            mtx.unlock();
        }*/

       ++counter;
        mtx.unlock();
    }
   
}

int main()
{
    std::thread t1(increaseTheCountFor100000Time);
    std::thread t2(increaseTheCountFor100000Time);
    t1.join();
    t2.join();

    cout<<"counter increases upto : "<<counter<<endl;
    return 0;
}