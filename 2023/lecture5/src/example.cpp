#include <iostream>
#include <math.h>

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double getArea()
    {
        return 3.14159 * std::pow(radius, radius); // std::pow == radius * radius
    }
};

int main()
{
    Circle myCircle(5.0);
    double area = myCircle.getArea();
    std::cout << "Площадь круга: " << area << std::endl;
    return 0;
}
