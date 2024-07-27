#include <iostream>
#include <math.h>
using namespace std;
class point
{
private:
    float x_, y_, z_;

public:
    point(float x = 5, float y = 5, float z = 5) : x_(x), y_(y), z_(z) {}
    point(const point &p) : x_(p.x_), y_(p.y_), z_(p.z_) {} // copy constructor
    void negate()
    {
        x_ *= -1;
        y_ *= -1;
        z_ *= -1;
    }
    double norm()
    {
        return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
    }
    void print()
    {
        cout << "(" << x_ << "," << y_ << "," << z_ << ")" << endl;
    }
};
int main()
{
    point p;
    float a = p.norm();
    p.print();
    cout << a << endl;
    cout << "new sample:" << endl;
    p.negate();
    float b = p.norm();
    p.print();
    cout << b << endl;
    return 0;
}