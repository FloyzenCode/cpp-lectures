#include <iostream>

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b);

int main()
{
    int a, b;
    double c, d;
    float x, y;
    a = 2;
    b = 5;
    c = 53.1;
    d = 4.241;
    x = 1.32;
    y = 7.5245;

    std::cout << sum(a, b) << std::endl;
    std::cout << sum(c, d) << std::endl;
    std::cout << sum(x, y) << std::endl;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}
