#include <iostream>
#include <string>

template <typename T>
T max(const T &x, const T &y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    std::cout << max(4, 6) << std::endl
              << max(5.12, 4.134) << std::endl;
    return 0;
}