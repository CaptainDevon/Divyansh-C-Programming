#include <iostream>
#include <thread>

using namespace std;

int paisa = 0;

void increment(int times)
{

    for (int i = 0; i < times; ++i)
    {
        ++paisa;
    }
}

int main()
{
    int iterations = 100000;

    std::thread t1(increment, iterations);
    std::thread t2(increment, iterations);

    t1.join();
    t2.join();

    cout << "Final value of paisa: " << paisa << endl;

    return 0;
}
