#include <iostream>
#include <cmath>

class complex
{
private:
    double real, imaginary;

public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    complex(double x, double y)
    {
        real = x;
        imaginary = y;
    }
    complex(const complex &other)
    {
        real = other.real;
        imaginary = other.imaginary;
    }

    double get_real()
    {
        return real;
    }

    double get_imaginary()
    {
        return imaginary;
    }

    double norm()
    {
        return sqrt((real * real) + (imaginary * imaginary));
    }

    bool is_equal_to(const complex &other)
    {
        if (real == other.real && imaginary == other.imaginary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    complex plus(const complex &other)
    {
        real += other.real;
        imaginary += other.imaginary;
        return complex(real, imaginary);
    }
    complex minus(const complex &other)
    {
        real -= other.real;
        imaginary -= other.imaginary;
        return complex(real, imaginary);
    }
    complex times(const complex &other)
    {
        //(x+iy)(a+ib)
        //(ax-yb)+i(xb+ya)
        real = ((real * other.real) - (imaginary * other.imaginary));
        imaginary = ((real * other.imaginary) + (imaginary * other.real));
        return complex(real, imaginary);
    }
    complex divideby(const complex &other)
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double resultReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double resultImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return complex(resultReal, resultImaginary);
    }
};
using namespace std;
int main()
{
    complex c1(3.0, 5.0);
    complex c2(2.0, 4.0);
    cout << c1.get_real() << " " << c1.get_imaginary() << endl;
    cout << c2.get_real() << " " << c2.get_imaginary() << endl;
    cout << c1.is_equal_to(c2) << endl;
    cout << "normal value:" << endl;
    cout << c1.norm() << " " << c2.norm() << endl;
    cout << "arithematic operations:" << endl;

    complex sum = c1.plus(c2);
    complex difference = c1.minus(c2);
    complex product = c1.times(c2);
    complex quotient = c1.divideby(c2);

    cout << "Sum: " << sum.get_real() << " + " << sum.get_imaginary() << "i" << endl;
    cout << "Difference: " << difference.get_real() << " + " << difference.get_imaginary() << "i" << endl;
    cout << "Product: " << product.get_real() << " + " << product.get_imaginary() << "i" << endl;
    cout << "Quotient: " << quotient.get_real() << " + " << quotient.get_imaginary() << "i" << endl;

    return 0;
}