#include <iostream>
#include <map>

int main()
{
    std::map<uint, std::string> map = {
        // uint - unsigned int
        {1, "object 1"},
        {3, "object 3"},
        {2, "object 2"},
        {5, "object 5"},
        {4, "object 4"},
    };

    // insert
    uint last_key = map.rbegin()->first;
    map.insert(std::make_pair(last_key + 1, "object 6"));
    map[7] = "object 7";

    // erase
    map.erase(7); // Удаление элемента с указанным ключом или итератором
    map.clear();  // Удаление всех элементов из map

    for (const auto &pair : map)
        std::cout << "key: " << pair.first << ", value: " << pair.second << '\n';

    auto it = map.find(7); // Поиск элемента по ключу (возвращает итератор к найденному элементу или `end()` если элемент не найден)
    if (it != map.end())
        std::cout << "Find!\n key: " << it->first << ", value: " << it->second << std::endl;

    map.size();  // Количество элементов в map
    map.empty(); // Проверка, является ли map пустым

    std::vector<std::pair<uint, std::string>> vec(map.begin(), map.end());

    // Сортируем вектор по значению
    std::sort(vec.begin(), vec.end());

    // Обходим отсортированный вектор и выводим значения и ключи
    for (const auto &pair : vec)
        // pair.first - значение (отсортированное)
        // pair.second - ключ
        std::cout << "\nkey: " << pair.first << ", value: " << pair.second << '\n';

    std::unordered_map<uint, std::string> un_map = {
        {1, "object 1"},
        {3, "object 3"},
        {2, "object 2"},
        {5, "object 5"},
        {4, "object 4"},
    };
    return 0;
}