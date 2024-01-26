#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{1, 2, 3, 4};
    std::vector<int>::iterator itr = numbers.begin(); // получаем итератор

    // получаем элемент, на который указывает итератор
    std::cout << *itr << std::endl; // 1
    // изменяем элемент
    *itr = 125;
    // проверяем изменение элемента
    std::cout << numbers[0] << std::endl; // 125

    std::cout << "\n=========================\n";

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int>::iterator iter = v1.begin();
    for (; iter != v1.end(); iter++)
        std::cout << *iter << " ";

    return 0;
}
