#include <iostream>
#include <limits.h>
#include <time.h>
const unsigned long mult_ = 234567821;
const unsigned long mod_ = ULONG_MAX;
const int max_ = INT_MAX;
using namespace std;
class random
{
private:
    unsigned long seed_;
    void randomize()
    {
        seed_ = (mult_ * seed_ + 1) % mod_;
    }

public:
    random()
    {
        seed_ = time(NULL);
    }
    random(unsigned long seed) : seed_(seed)
    {
        randomize();
    }
    int integer(int max = max_)
    {
        randomize();
        return seed_ % max_;
    }
    int integer(int min, int max)
    {
        randomize();
        return min + seed_ % (max - min + 1);
    }
    double real()
    {
        randomize();
        return double(seed_) / double(mod_);
    }
};
int main()
{
    random r;
    for (int i = 1; i <= 10; i++)
    {
        int m = r.integer();
        int n = r.integer(1, 99);
        double x = r.real();
        cout << "    " << m << "    " << n << "    " << x << endl;
    }
    return 0;
}