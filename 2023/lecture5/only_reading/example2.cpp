#include <iostream>
#include <string>
#include <vector>

// Abstract class - Transport
class Transport
{
public:
    virtual void printInfo() const = 0; // Pure virtual function
};

// Class Car, inherited from Transport
class Car : public Transport
{
private:
    std::string brand;
    std::string model;
    int year;

public:
    Car(const std::string &brand, const std::string &model, int year)
        : brand(brand), model(model), year(year) {}

    // Implementation of a virtual function printInfo()
    void printInfo() const
    {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

// Class Truck, inherited from Transport
class Truck : public Transport
{
private:
    std::string brand;
    double payload_capacity;

public:
    Truck(const std::string &brand, double payload_capacity)
        : brand(brand), payload_capacity(payload_capacity) {}

    // Implementation of a virtual function printInfo()
    void printInfo() const
    {
        std::cout << "Brand: " << brand << ", Payload Capacity: " << payload_capacity << " tons" << std::endl;
    }
};

int main()
{
    // Creating objects of the Car and Truck classes
    Car car("Mercedes", "C-Class", 2022);
    Truck truck("Volvo", 15.5);

    // Creating a vector of pointers to objects of Transport derived classes
    std::vector<Transport *> vehicles; // the vector contains pointers to objects of the Transport class
    vehicles.push_back(&car);
    vehicles.push_back(&truck);

    // Calling the virtual function printInfo() on all vector objects
    for (const auto &vehicle : vehicles)
    {
        vehicle->printInfo();
    }

    return 0;
}
