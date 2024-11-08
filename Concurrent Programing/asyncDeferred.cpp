#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include <future>

using namespace std;
using namespace std::chrono;

typedef unsigned long long int ull;


ull findOdd(ull start,ull end)
{
    ull OddSum=0;
    cout<<"ThreadID of findOdd : "<<this_thread::get_id()<<endl;
    for(ull i=start;i<=end;i++)
    {
           
        if(i&1)
        {
            OddSum+=i;
        }
    }
    return OddSum; 
}

int main()
{
    ull start=0,end=1900000000;
    cout<<"ThreadID : "<<this_thread::get_id()<<endl;
    cout<<"Thread created if policy is std::launch::async"<<endl;

    future<ull> OddSum=async(launch::deferred,findOdd,start,end);
    cout<<"Waiting for result!!"<<endl;
    cout<<"OddSum : "<<OddSum.get()<<endl;
    cout<<"Completed!"<<endl;
    return 0;
}