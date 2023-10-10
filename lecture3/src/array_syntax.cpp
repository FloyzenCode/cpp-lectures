#include <iostream>

const int sizeArr = 256;

int main()
{
    int arrInt[10];      // Объявляется массив типа int из 10 элементов
    double arrDb[7];     // Объявляется массив типа double из 7 элементов
    float arrFl[20];     // Объявляется массив типа float из 20 элементов
    char arrCh[sizeArr]; // Объявляется массив типа char из 256 элементов

    std::cin >> arrInt[0];
    std::cin >> arrInt[1];
    std::cin >> arrInt[2];
    std::cin >> arrInt[3];
    std::cin >> arrInt[4];
    std::cin >> arrInt[5];
    std::cin >> arrInt[6];
    std::cin >> arrInt[7];
    std::cin >> arrInt[8];
    std::cin >> arrInt[9];

    for (int i = 0; i < 7; i++)
        std::cin >> arrDb[i];

    for (int i = 0; i < std::size(arrFl); i++) // C++17 ISO
        std::cin >> arrFl[i];

    std::cin.getline(arrCh, sizeArr);

    return 0;
}
