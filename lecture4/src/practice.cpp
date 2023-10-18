#include <iostream>
#include <string>
#include <limits>

void changeNumber(std::string &number, std::string newNumber);
void swap(int *a, int *b);

int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    std::cout << "a = " << a << "; b = " << b << ";" << std::endl;

    std::string number, newNumber;
    std::cout << "Your number: ";
    std::getline(std::cin, number);

    std::cout << "New number: ";
    std::getline(std::cin, newNumber);

    std::cout << "Your number: " << number << std::endl
              << "Change number: " << newNumber << std::endl;
    changeNumber(number, newNumber);

    std::cout << "Your new number: " << number << std::endl;

    return 0;
}

void changeNumber(std::string &number, std::string newNumber)
{
    number = newNumber;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
