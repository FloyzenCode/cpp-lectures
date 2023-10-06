#include <iostream>

void foo(int a)
{
    std::cout << a;
}

void foo(int a, int b)
{
    std::cout << a << " " << b;
}

void foo(int p, double db)
{
    std::cout << p << " " << db;
}

void main()
{
    int a = 5, b = 20;
    double pi = 3.141592;

    foo(a);
    foo(a, b);
    foo(b, pi);
}
