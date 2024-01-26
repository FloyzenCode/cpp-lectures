#include <iostream>
#include <thread>
#include <chrono>

class MyClass
{
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass()
{
    std::cout << "CONSTRUCTOR!\n";
}

MyClass::~MyClass()
{
    std::cout << "DESTRUCTOR!\n";
}

int main()
{
    MyClass *obj = new MyClass();

    std::cout << "Code work...\n";
    std::this_thread::sleep_for(
        std::chrono::milliseconds(1000));
    delete obj;

    return 0;
}