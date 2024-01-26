// example.hpp
#include <iostream>

class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int a, int b);
    ~Rectangle();
    int area();
    int sum();
};