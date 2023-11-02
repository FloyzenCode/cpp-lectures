#include <iostream>

template <typename T, typename... Args>
T foo(Args &&...args)
{
    ((args = 5 + 5), ...);
    ((std::cout << args << " "), ...);
}

int main()
{
    foo<int>(42, 42, 24, 4, 245, 2, 324, 5, 234, 12, 34, 123, 44, 3);
    std::cout << std::endl;
    foo<double>(34.5, 3.15, 2.43);
    return 0;
}
