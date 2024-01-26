#include <iostream>
#include <random>

double triangle_area(double a, double h); // not templates

int main()
{
    double a = 24, b = 100;

    std::cout << "a = " << a << "; b = " << b << ";" << std::endl;
    std::cout << "S = " << triangle_area(a, b) << std::endl;
    return 0;
}

double triangle_area(double a, double h)
{
    return 0.5 * a * h;
}
