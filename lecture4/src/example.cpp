// #include <iostream>
// using namespace std;

// int main()
// {
//     int firstvalue = 5, secondvalue = 15;
//     int *p1, *p2;

//     p1 = &firstvalue;  // p1 = address of firstvalue
//     p2 = &secondvalue; // p2 = address of secondvalue
//     *p1 = 10;          // value pointed to by p1 = 10
//     *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
//     p1 = p2;           // p1 = p2 (value of pointer is copied)
//     *p1 = 20;          // value pointed to by p1 = 20

//     cout << "firstvalue is " << firstvalue << '\n';
//     cout << "secondvalue is " << secondvalue << '\n';
//     return 0;
// }

// pointer to functions
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return (a + b);
}

int subtraction(int a, int b)
{
    return (a - b);
}

int operation(int x, int y, int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(x, y);
    return (g);
}

int main()
{
    int m, n;
    int (*minus)(int, int) = subtraction;

    m = operation(7, 5, addition);
    n = operation(20, m, minus);

    std::cout << n << std::endl;
    return 0;
}
