#include <iostream>
#include <list>
#include <unordered_set>

void removeDuplicates(std::list<int> &nums)
{
    std::unordered_set<int> seen;
    auto it = nums.begin();
    while (it != nums.end())
    {
        if (seen.count(*it) > 0)
        {
            it = nums.erase(it);
        }
        else
        {
            seen.insert(*it);
            ++it;
        }
    }
}

void one()
{
    std::list<int> nums = {1, 2, 3, 2, 4, 3, 5, 6, 1};

    removeDuplicates(nums);

    std::cout << "List after removing duplicates: ";
    for (auto num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void reverseList(std::list<int> &nums)
{
    nums.reverse();
}

void two()
{
    std::list<int> nums = {1, 2, 3, 4, 5};

    reverseList(nums);

    std::cout << "Reversed list: ";
    for (auto num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    one();
    two();
    return 0;
}
