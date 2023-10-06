#include <iostream>

int main()
{
    int score = 0;

    std::cout << "Input score: ";
    std::cin >> score;

    if (score > 100) {
        std::cout << "WIN\n";
    }
    else {
        std::cout << "LOSE\n";
    }

    return 0;
}