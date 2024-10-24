#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

void display(int count)
{
    while(count--)cout<<"concurrent Programming"<<endl;
    std::this_thread::sleep_for(chrono::seconds(5));
}

int main()
{
    std::thread t(display,10);
    cout<<"START"<<endl;
    if(t.joinable())
    {
        t.join();
    }
    cout<<"TERMINATION AFTER 5 SECONDS"<<endl;
    return 0;
}