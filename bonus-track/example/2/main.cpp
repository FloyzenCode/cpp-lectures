#include <iostream>
#include "./src/header.hpp"

int main(int argc, char *argv[])
{
    AreaRectangle rect1;

    rect1.height = 5.0;
    rect1.width = 10.0;

    double result = rect1.area(rect1);
    std::cout << rect1 << std::endl << result << '\n';
    return 0;
}
