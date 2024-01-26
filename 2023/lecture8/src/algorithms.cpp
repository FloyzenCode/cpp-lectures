#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void vp(std::vector<T> v1)
{
    for (const auto &item : v1)
        std::cout << item << " ";
    std::cout << std::endl;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, std::vector<T> v)
{
    for (const auto &item : v)
        os << item << " ";
    return os;
}

template <typename T>
std::vector<T> sort_vector(std::vector<T> &v)
{
    std::sort(v.begin(), v.end());
    return v;
}

int main()
{
    std::vector<int> v1 = {100, 42, 17, 80, 20, 0};

    std::cout << sort_vector(v1);
    
    return 0;
}