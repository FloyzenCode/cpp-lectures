#include <iostream>

template <typename... Args>
void printArgs(Args... args)
{
    ((std::cout << args), ...);
}

int main()
{
    printArgs("Hello", " World, ", "user", "!"); // Hello World, user!
    return 0;
}