#include <iostream>
#include <thread>
using namespace std;


void func(int x)
{
    while(x--)
    {
        cout<<x<<endl;
    }
}

int main()
{
    std::thread t1(func,10);
    t1.join();
    return 0;   
}