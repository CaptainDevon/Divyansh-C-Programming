#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;
using namespace std::chrono;

int myAmount=0;
std::timed_mutex m;

void increment1(int i)
{
    if(m.try_lock_for(std::chrono::seconds(2)))
    {
        myAmount++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout<<"Thread "<<i<<" Entered"<<endl;
        m.unlock();
    }
    else
    {
        cout<<"Thread "<<i<<" Cannot enter"<<endl;
    }
}

void increment2(int i)
{
    if(m.try_lock_for(std::chrono::seconds(1)))
    {
        myAmount++;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout<<"Thread "<<i<<" Entered"<<endl;
        m.unlock();
    }
    else
    {
        cout<<"Thread "<<i<<" Cannot enter"<<endl;
    }
}
int main()
{
    std::thread t1(increment1,5);
    std::thread t2(increment1,10);

    std::thread t3(increment2,2);
    std::thread t4(increment2,4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    cout<<myAmount<<endl;
    return 0;
}