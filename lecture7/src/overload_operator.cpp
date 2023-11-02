#include <iostream>

struct Coord
{
    double x;
    double y;
};

static std::ostream &operator<<(std::ostream &os, const Coord &object)
{
    return os << "x = " << object.x << ", y = " << object.y;
} // static (clang++ -Weverything)

class Person
{
public:
    Person(std::string name, unsigned age) : name{name}, age{age} {}
    std::string getName() const { return name; }
    unsigned getAge() const { return age; }

    void setName(std::string personName) { name = personName; }
    void setAge(unsigned personAge) { age = personAge; }

private:
    std::string name;
    unsigned age{};
};

std::istream &operator>>(std::istream &in, Person &person)
{
    std::string name;
    unsigned age;
    in >> name >> age;
    person.setName(name);
    person.setAge(age);
    return in;
}

int main()
{
    Coord object;
    object.x = 5.4;
    object.y = 1.24;

    std::cout << object << std::endl;

    Person bob{"", 0};
    std::cout << "Input name and age: ";
    std::cin >> bob;
    std::cout << "Name: " << bob.getName() << "\nAge: " << bob.getAge() << std::endl;

    return 0;
}
