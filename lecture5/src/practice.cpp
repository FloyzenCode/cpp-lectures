#include <iostream>
#include <string>
#include <vector>

// Класс для представления продукта
class Product
{
    std::string name;
    std::string expirationDate;
    int quantity;

public:
    // Конструктор класса Product
    Product(const std::string &name, const std::string &expirationDate, int quantity)
    {
        this->name = name;
        this->expirationDate = expirationDate;
        this->quantity = quantity;
    }

    // Метод для получения названия продукта
    std::string getName() const
    {
        return name;
    }

    // Метод для получения срока годности продукта
    std::string getExpirationDate() const
    {
        return expirationDate;
    }

    // Метод для получения количества продукта
    int getQuantity() const
    {
        return quantity;
    }
};

// Класс для представления холодильника
class Fridge
{
    std::vector<Product> products;

public:
    // Метод для добавления нового продукта
    void addProduct(const std::string &name, const std::string &expirationDate, int quantity)
    {
        Product newProduct(name, expirationDate, quantity);
        products.push_back(newProduct);
        std::cout << "Продукт успешно добавлен в холодильник!" << std::endl;
    }

    // Метод для удаления продукта
    void removeProduct(const std::string &name)
    {
        for (auto it = products.begin(); it != products.end(); ++it)
        {
            if (it->getName() == name)
            {
                products.erase(it);
                std::cout << "Продукт успешно удален из холодильника!" << std::endl;
                return;
            }
        }
        std::cout << "Продукт с таким названием не найден в холодильнике!" << std::endl;
    }

    // Метод для проверки количества продукта
    void checkQuantity(const std::string &name) const
    {
        int totalQuantity = 0;
        for (const Product &product : products)
        {
            if (product.getName() == name)
            {
                totalQuantity += product.getQuantity();
            }
        }
        std::cout << "Количество продукта \"" << name << "\" в холодильнике: " << totalQuantity << std::endl;
    }

    // Метод для вывода списка всех продуктов
    void printProducts() const
    {
        if (products.empty())
        {
            std::cout << "Холодильник пуст!" << std::endl;
        }
        else
        {
            std::cout << "Список продуктов в холодильнике:" << std::endl;
            for (const Product &product : products)
            {
                std::cout << "Название: " << product.getName() << std::endl;
                std::cout << "Срок годности: " << product.getExpirationDate() << std::endl;
                std::cout << "Количество: " << product.getQuantity() << std::endl;
                std::cout << std::endl;
            }
        }
    }
};

int main()
{
    Fridge fridge;

    while (true)
    {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Добавить продукт" << std::endl;
        std::cout << "2. Удалить продукт" << std::endl;
        std::cout << "3. Проверить количество продукта" << std::endl;
        std::cout << "4. Вывести список всех продуктов" << std::endl;
        std::cout << "5. Выход" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1)
        {
            std::string name, expirationDate;
            int quantity;

            std::cout << "Введите название продукта: ";
            std::cin >> name;
            std::cout << "Введите срок годности продукта: ";
            std::cin >> expirationDate;
            std::cout << "Введите количество продукта: ";
            std::cin >> quantity;

            fridge.addProduct(name, expirationDate, quantity);
        }
        else if (choice == 2)
        {
            std::string name;

            std::cout << "Введите название продукта для удаления: ";
            std::cin >> name;

            fridge.removeProduct(name);
        }
        else if (choice == 3)
        {
            std::string name;

            std::cout << "Введите название продукта, чтобы проверить количество: ";
            std::cin >> name;

            fridge.checkQuantity(name);
        }
        else if (choice == 4)
        {
            fridge.printProducts();
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            std::cout << "Некорректный выбор! Пожалуйста, выберите существующий пункт." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
