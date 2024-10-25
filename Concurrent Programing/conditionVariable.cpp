#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

condition_variable cv;
mutex m;
long balance=0;

void depositMoney(int money)
{
    lock_guard<mutex>lg(m);
    balance+=money;
    cout<<"Amount added: "<<money<<endl;
    cout<<"Current Balance: "<<balance<<endl;
    cv.notify_one();
}

void withdrawMoney(int money)
{
    unique_lock<mutex>ul(m);
    cv.wait(ul,[]{return(balance!=0)?true:false;});
    if(balance>=money)
    {
        balance-=money;
        cout<<"Amount Deducted: "<<money<<endl;
    }
    else
    {
        cout<<"Amount cannot be deducted"<<endl;
    }
    cout<<"Current Balance: "<<balance<<endl;
}

int main()
{
    thread t1(withdrawMoney,500);
    thread t2(depositMoney,500);
    t1.join();
    t2.join();
    return 0;
}