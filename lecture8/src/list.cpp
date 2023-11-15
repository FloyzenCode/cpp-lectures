#include <iostream>
#include <list>

int main()
{
    std::list<int> list = {1, 2, 3, 4, 5};

    list.push_back(6);  // Вставка элемента в конец списка
    list.push_front(0); // Вставка элемента в начало списка
    list.pop_back();    // Удаление элемента с конца списка
    list.pop_front();   // Удаление элемента с начала списка

    size_t list_size = list.size();
    int firstElement = list.front(); // Получение первого элемента
    int lastElement = list.back();   // Получение последнего элемента

    std::list<int>::iterator it = list.begin();
    ++it;                           // Переход к следующему элементу
    list.insert(it, 100);           // Вставка элемента перед итератором
    list.erase(it);                 // Удаление элемента по итератору
    list.sort();                    // Сортировка списка по возрастанию
    list.sort(std::greater<int>()); // Сортировка списка по убыванию
    list.reverse();                 // Изменение порядка элементов на обратный

    std::list<int>::iterator it = std::find(list.begin(), list.end(), 3);
    if (it != list.end())
    {
        // Элемент найден
    }
    else
    {
        // Элемент не найден
    }
    return 0;
}
