#include <iostream>

int main()
{

    while (true)
    {
        int number;         // создаём переменную, которую будем принимать от пользователя
        std::cin >> number; // принимаем значение от пользователя

        if (number == 0) // если значение 0, то выходим из цикла
            break;

        std::cout << "number = " << number << std::endl; // показываем значение, которое ввёл пользователь
    }

    return 0;
}
