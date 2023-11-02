#include <iostream>
#include <fstream>
#include <vector>

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

std::ostream &operator<<(std::ostream &os, const Person &person)
{
    return os << person.getName() << " " << person.getAge();
}

std::istream &operator>>(std::istream &in, Person &person)
{
    std::string name;
    unsigned age;
    in >> name >> age;
    // если ввод не удался, устанавливаем некоторые значения по умолчанию
    if (in)
    {
        person.setName(name);
        person.setAge(age);
    }
    return in;
}

int main()
{
    // начальные данные - вектор объектов Person
    std::vector<Person> people =
        {
            Person{"Tom", 23},
            Person{"Bob", 25},
            Person{"Alice", 22},
            Person{"Kate", 31}};
    // запись данных в файл
    std::ofstream out("people.txt");
    if (out.is_open())
    {
        for (const Person &person : people)
        {
            out << person << std::endl;
        }
    }
    out.close();
    // вектор для считываемых данных
    std::vector<Person> new_people;
    // чтение ранее записанных данных из файла
    std::ifstream in("people.txt");
    if (in.is_open())
    {
        Person person{"", 0};
        while (in >> person)
        {
            new_people.push_back(person);
        }
    }
    in.close();
    // вывод считанных данных на консоль
    std::cout << "All people:" << std::endl;
    for (const Person &person : new_people)
    {
        std::cout << person << std::endl;
    }

    return 0;
}