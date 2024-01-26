#include <iostream>
#include <vector>

struct Person
{
    unsigned int age;
    std::string name;
    std::string subname;
    double weight;
    std::string workspace;
};

int main()
{
    std::vector<Person> persons; // vector is the data structure
    Person p1, p2;

    p1.age = 16;              // initializing age
    p1.name = "Pavel";        // initializing name
    p1.subname = "Mayorov";   // initializing subname
    p1.weight = 80.3;         // initializing  weight
    p1.workspace = "College"; // initializing workspace

    p2.age = 18;
    p2.name = "Alexander";
    p2.subname = "Voronov";
    p2.weight = 76.8;
    p2.workspace = "Microsoft";

    persons.push_back(p1); // push element into vector
    persons.push_back(p2); // push element into vector

    // print vector
    for (const auto &person : persons)
    {
        std::cout << "Name: " << person.name << std::endl;
        std::cout << "Subname: " << person.subname << std::endl;
        std::cout << "Age: " << person.age << std::endl;
        std::cout << "Weight: " << person.weight << std::endl;
        std::cout << "Workspace: " << person.workspace << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
