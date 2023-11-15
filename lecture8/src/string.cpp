#include <iostream>
#include <string>

int main()
{
    std::string str1 = "Hello, Alex!"; // создание строки
    std::string str2 = " How are you?";
    std::string concatenate = str1 + str2; // конкатенация - сложение строк
    char index = str1[1];                  // 'e'
    std::size_t size_str2 = str2.size();   // 13

    if (str1.empty())
        std::cout << "str empty" << '\n';
    else
        std::cout << "str1 not empty" << '\n';

    bool isEqual = str1 == str2;    // Проверить, равны ли строки
    bool isNotEqual = str1 != str2; // Проверить, не равны ли строки
    bool isLess = str1 < str2;      // Проверить, меньше ли первая строка

    std::string str = "Hello World";
    str.insert(6, "Beautiful ");
    std::cout << "str: " << str << '\n'; // "Hello Beautiful World"

    std::string str3 = "Hello Beautiful World";
    str3.erase(6, 10);
    std::cout << "str3: " << str3 << '\n'; // "Hello World"

    std::size_t pos = str3.find(str);      // Найти позицию первого вхождения подстроки
    std::size_t lastPos = str3.rfind(str); // Найти позицию последнего вхождения подстроки

    std::cout << pos << '\n'
              << lastPos << '\n';

    std::string str_num = "1234";
    int num = std::stoi(str_num);     // Преобразовать строку в int
    double num2 = std::stod(str_num); // Преобразовать строку в double
    std::cout << "num: " << num << "\nnum2: " << num2 << '\n';

    return 0;
}