#include <iostream>

int main()
{
    int a = 5;
    int *ptr = &a;                                 // Создаем указатель на переменную a
    std::cout << "value a: " << a << std::endl; // Выводим значение a

    *ptr = 10; // Изменяем значение переменной a через указатель
    std::cout << "New value a: " << a << std::endl;
    return 0;
}
