#include <iostream>
#include <thread>
using namespace std;


int main()
{

    std::thread t([](int x)
    {
        while(x--)
        {
            cout<<x<<endl;
        }
    },10);
    
    t.join();
    return 0;
}