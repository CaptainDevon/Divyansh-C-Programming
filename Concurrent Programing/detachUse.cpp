#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

void display(int count)
{
    while (count--)
        cout << count << " : concurrent Programming" << endl;
    cout << "Thread Finished" << endl;
}

int main()
{
    std::thread t(display, 10);
    cout << "START" << endl;
    t.detach();
    cout << "TERMINATION AFTER 5 SECONDS" << endl;
    std::this_thread::sleep_for(chrono::seconds(5));
    return 0;
}