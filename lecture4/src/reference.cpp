#include <iostream>

void changeValue(int &a)
{
    a = 10;
}

int main()
{
    int a = 5;
    changeValue(a); // Передаем ссылку на переменную a в функцию changeValue
    std::cout << "После вызова функции: " << a << std::endl;
    return 0;
}
