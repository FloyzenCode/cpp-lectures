#include <iostream>
#include <set>

int main()
{
    std::set mySet = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    mySet.insert(5); // вставка одного элемента
    mySet.insert(10);
    mySet.insert(3);
    mySet.erase(10); // удаление элемента по значению

    if (mySet.count(5) > 0)
        std::cout << "element 5 find\n";

    auto iter = mySet.find(5);
    if (iter != mySet.end())
        std::cout << "element 5 find\n";
    else
        std::cout << "element 5 not find\n";

    int size = mySet.size();

    for (const auto &item : mySet)
        std::cout << item << ' ';

    mySet.clear();

    return 0;
}
