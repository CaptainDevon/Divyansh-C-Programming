#include <iostream>
using namespace std;
class sphere
{
private:
    float radius;
    float centre[3];

public:
    sphere()
    {
        centre[3] = {0};
        radius = 0;
    }
    sphere(float x_, float y_, float z_, float r)
    {
        centre[0] = x_;
        centre[1] = y_;
        centre[2] = z_;
        radius = r;
    }
    float surface_area()
    {
        return 4 * 3.14 * radius * radius;
    }
    float volume()
    {
        return (4 / 3) * 3.14 * radius * radius * radius;
    }
};
int main()
{
    cout << "--------------------------------SAMPLE 1---------------------------------------" << endl;
    sphere s1;
    cout << "the surface area of the sphere is= " << s1.surface_area() << endl;
    cout << "the volume of the sphere is= " << s1.volume() << endl;
    cout << "--------------------------------SAMPLE 2---------------------------------------" << endl;
    sphere s2(27, 1, 4, 5);
    cout << "the surface area of the sphere is= " << s2.surface_area() << endl;
    cout << "the volume of the sphere is= " << s2.volume() << endl;
    return 0;
}