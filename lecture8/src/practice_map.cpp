#include <iostream>
#include <map>
#include <string>

void one()
{
    std::map<std::string, std::string> countries = {
        {"Россия", "Москва"},
        {"Китай", "Пекин"},
        {"США", "Вашингтон"},
        {"Франция", "Париж"},
        {"Япония", "Токио"},
    };

    for (const auto &pair : countries)
    {
        std::cout << "Страна: " << pair.first << ", Столица: " << pair.second << std::endl;
    }

    // Поиск столицы по стране
    std::string country;
    std::cout << "Введите название страны: ";
    std::getline(std::cin, country);

    auto it = countries.find(country);
    if (it != countries.end())
    {
        std::cout << "Столица " << country << ": " << it->second << std::endl;
    }
    else
    {
        std::cout << "Страна не найдена." << std::endl;
    }
}

void two()
{
    std::map<std::string, int> studentGrades;

    // Считываем список студентов и их оценок
    int numStudents;
    std::cout << "Введите количество студентов: ";
    std::cin >> numStudents;

    std::cin.ignore(); // Игнорируем символ новой строки после числа

    for (int i = 0; i < numStudents; ++i)
    {
        std::string name;
        int grade;

        std::cout << "Введите имя студента: ";
        std::getline(std::cin, name);

        std::cout << "Введите оценку студента: ";
        std::cin >> grade;

        studentGrades[name] = grade;
    }

    // Находим максимальную оценку и имя студента
    int maxGrade = 0;
    std::string topStudent;

    for (const auto &pair : studentGrades)
    {
        if (pair.second > maxGrade)
        {
            maxGrade = pair.second;
            topStudent = pair.first;
        }
    }

    // Выводим результаты
    std::cout << "Студент с максимальной оценкой: " << topStudent << std::endl;
    std::cout << "Максимальная оценка: " << maxGrade << std::endl;
}

int main()
{
    one();
    two();
    return 0;
}
