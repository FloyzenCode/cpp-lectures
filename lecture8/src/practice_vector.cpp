#include <iostream>
#include <vector>
#include <algorithm>

void one()
{
    std::vector<int> numbers;
    int input;

    std::cout << "Введите целые числа (для завершения введите 0):\n";

    while (std::cin >> input && input != 0)
    {
        numbers.push_back(input);
    }

    std::cout << "Введенный вектор:\n";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void two()
{
    std::vector<int> numbers;
    int input;

    std::cout << "Введите целые числа (для завершения введите 0):\n";

    while (std::cin >> input && input != 0)
    {
        numbers.push_back(input);
    }

    int sum = 0;
    for (int num : numbers)
    {
        sum += num;
    }

    std::cout << "Сумма элементов вектора: " << sum << std::endl;
}

void three()
{
    std::vector<int> numbers;

    for (int i = 0; i < 10; ++i)
    {
        numbers.push_back(rand() % 1000);
    }

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Отсортированный вектор:\n";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    one();
    std::cout << "\n=====================================================================\n";
    two();
    std::cout << "\n=====================================================================\n";
    three();
    std::cout << "\n=====================================================================\n";

    return 0;
}
