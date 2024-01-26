#include <iostream>

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

template <typename T>
T minus(T a, T b)
{
    return a - b;
}

template <typename T>
T min(const T &a, const T &b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main()
{
    int res1 = sum<int>(2, 10);
    double res2 = minus<double>(3.14, 0.14);
    auto res3 = min(4, 1);

    std::cout << "res1 = " << res1 << std::endl
              << "res2 = " << res2 << std::endl
              << "res3 = " << res3 << std::endl;
    return 0;
}