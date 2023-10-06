#include <iostream>

int main()
{
    int a;
    std::cout << "Input value for a: ";
    std::cin >> a;

    if (a < 2) {
        std::cout << "a < 2";
    } else if (a == 4) {
        std::cout << "a == 4";
    } else {
        std::cout << "...";
    }

    return 0;
}