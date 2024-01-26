#include <iostream>

const double pi = 3.1415926535897932;

double toRadian(double deegres)
{
    return (deegres * pi) / 180.0;
}

double rubToUSD(double rub)
{
    return rub * 0.0099;
}

int main()
{
    double a;
    std::cin >> a;
    std::cout << "rad: " << toRadian(a) << std::endl;
    double rub;
    std::cin >> rub;
    std::cout << "rub to USD: " << rubToUSD(rub) << std::endl;
    return 0;
}
