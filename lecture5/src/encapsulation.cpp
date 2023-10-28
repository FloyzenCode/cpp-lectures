#include <iostream>

class MyClass
{
private:
    const double pi = 3.1415;

public:
    double GetPi();
};

class MyClass2 : MyClass
{
public:
    const double pi = GetPi();
};

int main()
{
    MyClass a;
    MyClass2 b;
    
    const double pi = b.pi;

    std::cout << a.GetPi() << std::endl;
    std::cout << "const double pi = " << pi;

    return 0;
}

double MyClass::GetPi()
{
    return pi;
}