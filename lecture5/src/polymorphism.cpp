#include <iostream>

// static polymorphism
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

// example using templates
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int demo_static_polymorf()
{
    int result1 = add(3, 4);
    double result2 = add(2.5, 3.7);
    float result3 = add(1.2f, 3.9f);

    std::cout << "result1 = " << result1 << std::endl
              << "result2 = " << result2 << std::endl
              << "result3 = " << result3 << std::endl;
    return 0;
}

// dynamic polymorphism
class Shape
{
public:
    virtual double area() const = 0; // virtual function
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override
    {
        return 3.14159 * radius * radius;
    }
};

int demo_dynamic_polymorf()
{
    Shape *shape1 = new Rectangle(4.0, 5.0); // создание объекта Rectangle через указатель на Shape
    Shape *shape2 = new Circle(2.5);         // создание объекта Circle через указатель на Shape

    double area1 = shape1->area(); // вызывается метод area() класса Rectangle
    double area2 = shape2->area(); // вызывается метод area() класса Circle

    delete shape1;
    delete shape2;

    return 0;
}

int main()
{
    demo_static_polymorf();
    std::cout << std::endl
              << "========================================"
              << std::endl;
    demo_dynamic_polymorf();
    return 0;
}