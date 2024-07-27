#include <iostream>
using namespace std;
class circle
{
private:
    float x, y, radius;

public:
    circle()
    {
        x = 0;
        y = 0;
        radius = 0;
    }
    circle(float x_coordinate, float y_coordinate, float r)
    {
        x = x_coordinate;
        y = y_coordinate;
        radius = r;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
    float circumference()
    {
        return 2 * 3.14 * radius;
    }
};
class modified_circle
{
private:
    float radius;
    float centre[2];

public:
    modified_circle()
    {
        centre[2] = {0};
        radius = 0;
    }
    modified_circle(float x_coordinate, float y_coordinate, float r)
    {
        centre[0] = x_coordinate;
        centre[1] = y_coordinate;
        radius = r;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
    float circumference()
    {
        return 2 * 3.14 * radius;
    }
};
int main()
{
    circle c(5, 5, 5);
    cout << "the area of the circle is= " << c.area() << endl;
    cout << "the circumference of the circle is= " << c.circumference() << endl;
    cout << "--------------------------------next sample-----------------------" << endl;

    modified_circle mc(3, 5.4, 8.9);
    cout << "the area of the circle is= " << mc.area() << endl;
    cout << "the circumference of the circle is= " << mc.circumference() << endl;

    return 0;
}