#include <iostream>

class Car
{
private:
    std::string name;
    int speed;

public:
    Car(std::string _name, int _speed) : name(_name), speed(_speed) { }

    /* this constructor is equivalent to this:

        Car(std::string _name, int _speed)
        {
            name = _name;
            speed = _speed;
        }

    */

    void start()
    {
        std::cout << "Car " << name << " start." << std::endl;
    }

    void accelerate()
    {
        std::cout << "Car " << name << " speed to " << speed << " km/h." << std::endl;
    }

    void stop()
    {
        std::cout << "Car " << name << " stop." << std::endl;
    }
};

int main()
{
    Car myCar("BMW", 200);
    
    myCar.start();
    myCar.accelerate();
    myCar.stop();

    return 0;
}
