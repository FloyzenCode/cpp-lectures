#include <iostream>
#include <random>

double triangle_area(double a, double h);

int main()
{
    int a = 24, b = 100;
    // std::cout << a << " " << b << std::endl;
    std::cout << triangle_area(a, b) << std::endl;
    return 0;
}

double triangle_area(double a, double h)
{
    return 0.5 * a * h;
}
