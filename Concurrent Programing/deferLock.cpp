#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1;
int buffer=0;

void task(const char* threadNumber,int loopFor)
{
    std::unique_lock<mutex>lock(m1,defer_lock);   //it says i have acquired it but not locked 
    /*
    
     u can write here some statements
    
    */
    lock.lock(); //then acquire the lock
    while(loopFor--)
    {
        buffer++;
        cout<<threadNumber<<" "<<buffer<<endl;
    }
    
}

int main()
{
    thread t1(task,"T1 ",10);
    thread t2(task,"T2 ",10);
    t1.join();
    t2.join();
    return 0;
}