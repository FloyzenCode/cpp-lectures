#include <iostream>
#include <set>

void one()
{
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2 = {4, 5, 6, 7, 8};

    std::set<int> intersection;
    for (auto it = set1.begin(); it != set1.end(); ++it)
    {
        if (set2.find(*it) != set2.end())
        {
            intersection.insert(*it);
        }
    }

    std::cout << "Intersection: ";
    for (auto it = intersection.begin(); it != intersection.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

bool containsPositive(const std::set<int> &nums)
{
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        if (*it > 0)
        {
            return true;
        }
    }
    return false;
}

void two()
{
    std::set<int> set1 = {1, 2, -3, 4, -5};
    std::set<int> set2 = {-4, -5, -6, -7, -8};

    std::cout << "Set 1 contains positive elements? " << (containsPositive(set1) ? "Yes" : "No") << std::endl;
    std::cout << "Set 2 contains positive elements? " << (containsPositive(set2) ? "Yes" : "No") << std::endl;
}

int main()
{
    one();
    two();
    return 0;
}
