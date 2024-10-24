#include <iostream>
#include <thread>
using namespace std;

class Base
{
    public:
    void operator () (int x){
        while(x--)
        {
            cout<<x<<endl;
        }
    }
};

int main()
{
    std::thread t((Base()),10);
    t.join();
    return 0;
}