#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6};
    int index_v = v1[2];                             // 3
    std::vector<int> myVector(v1.begin(), v1.end()); // 1, 2, 3, 4, 5, 6
    // Создание вектора с начальным размером 5 и заполнение значениями 0
    std::vector<int> myVector2(5, 0); // 0 0 0 0 0

    // algorithms
    v1.push_back(2);                // 1, 2, 3, 4, 5, 6, 2
    v1.insert(v1.begin() + 2, 123); // 1 2 123 3 4 5 6 2
    v1.pop_back();                  // 1 2 123 3 4 5 6
    v1.erase(v1.begin() + 3);       // 1 2 123 4 5 6
    myVector.clear();               // not value's

    size_t v1_size = v1.size();         // 6
    int capacity = myVector.capacity(); // 6
    bool empty = myVector.empty();      // true/false

    for (const auto &item : v1)
        std::cout << item << ' ';

    std::vector<int> v2 = {4, 2, 345, 56, 2, 34, 5, 6, 1, 0, 3, -2};

    std::sort(myVector.begin(), myVector.end()); // sort vector

    // Поиск значения в векторе (возвращает итератор)
    auto it = std::find(myVector.begin(), myVector.end(), 42);

    // Обратное расположение элементов вектора
    std::reverse(myVector.begin(), myVector.end());

    // Поиск минимального/максимального значения в векторе
    auto min = std::min_element(myVector.begin(), myVector.end());
    auto max = std::max_element(myVector.begin(), myVector.end());

    // Удаление дубликатов из вектора
    std::sort(myVector.begin(), myVector.end());
    myVector.erase(std::unique(myVector.begin(), myVector.end()), myVector.end());

    return 0;
}
