#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull evenSum = 0;
ull oddSum = 0;

void even(ull start, ull end)
{
    for (ull i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            evenSum += i;
    }
}

void odd(int start, int end)
{
    for (ull i = start; i <= end; i++)
    {
        if (i % 2 != 0)
            oddSum += i;
    }
}
int main()
{
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    std::thread t1(even,start,end);
    std::thread t2(odd,start,end);

    t1.join();
    t2.join();

    auto stopTime = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "The even sum is: " << evenSum << endl;
    cout << "The odd sum is: " << oddSum << endl;
    cout << "time taken: " << duration.count() / 1000000 << "s" << endl;

    return 0;
}