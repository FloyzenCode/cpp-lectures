#include <iostream>
#include <algorithm>
#include <map>
#include <string>

class Inventory
{
private:
    std::map<std::string, std::vector<std::string>> craftingRecipes{
        {"Sword", {"Steel", "Wood"}},
        {"Shield", {"Steel", "Leather"}}};

    bool CanCraftItem(std::map<unsigned int, std::string> &inventory, const std::vector<std::string> &recipe);
    void RemoveItemsFromInventory(std::map<unsigned int, std::string> &inventory, const std::vector<std::string> &recipe);
    void ShowCraftList();

public:
    void ShowCommands();
    void CheckInventory(std::map<unsigned int, std::string> &inventory);
    void AddNewItem(std::map<unsigned int, std::string> &inventory);
    void CraftItem(std::map<unsigned int, std::string> &inventory);
    void RemoveItemById(std::map<unsigned int, std::string> &inventory);
};

struct Player : Inventory
{
    int id;
    std::string nickname;
    std::map<unsigned int, std::string> inventory;
};

int main()
{
    Player *p1 = new Player;

    p1->id = 1;
    p1->inventory[1] = "Knife";
    p1->inventory[2] = "Armor";
    p1->inventory[3] = "Grenade";

    while (true)
    {

        unsigned int choice;

        p1->ShowCommands();

        std::cout << "Input your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again..." << std::endl;
            continue;
        }
        else if (choice == 0)
            break;

        switch (choice)
        {
        case 1:
            p1->CheckInventory(p1->inventory);
            break;
        case 2:
            p1->AddNewItem(p1->inventory);
            break;
        case 3:
            p1->CraftItem(p1->inventory);
            break;
        case 4:
            p1->RemoveItemById(p1->inventory);
        default:
            std::cout << "\nError!\n";
            p1->ShowCommands();
            break;
        }
    }

    delete p1;
    return 0;
}

void Inventory::ShowCommands()
{
    std::vector<std::string> list = {
        "Check inventory",
        "Add new item",
        "Craft new item",
        "Remove item by id",
    };

    for (size_t i = 0; i < list.size(); ++i)
        std::cout << i + 1 << ") " << list[i] << std::endl;

    std::cout << "0) Exit" << std::endl;
}

void Inventory::CheckInventory(std::map<unsigned int, std::string> &inventory)
{
    for (const auto &[id, item] : inventory)
        std::cout << "id: " << id << std::endl
                  << "item: " << item << std::endl
                  << "=============================" << std::endl;
}

void Inventory::AddNewItem(std::map<unsigned int, std::string> &inventory)
{
    std::string item;
    unsigned int lastKey = inventory.rbegin()->first;

    std::cout << "Input name for new item: ";
    std::getline(std::cin, item);

    inventory[lastKey + 1] = item;
}

bool Inventory::CanCraftItem(std::map<unsigned int, std::string> &inventory, const std::vector<std::string> &recipe)
{
    for (const auto &item : recipe)
    {
        if (!std::any_of(inventory.begin(), inventory.end(), [&](const std::pair<unsigned int, std::string> &pair)
                         { return pair.second == item; }))
        {
            return false;
        }
    }
    return true;
}

void Inventory::RemoveItemsFromInventory(std::map<unsigned int, std::string> &inventory, const std::vector<std::string> &recipe)
{
    for (const auto &item : recipe)
    {
        auto it = std::find_if(inventory.begin(), inventory.end(), [&](const std::pair<unsigned int, std::string> &pair)
                               { return pair.second == item; });
        if (it != inventory.end())
        {
            inventory.erase(it);
        }
    }
}

void Inventory::ShowCraftList()
{
    bool isCraftable = false;
    std::cout << "Items you can craft:" << '\n';

    for (const auto &[craftItem, recipe] : craftingRecipes)
        std::cout << craftItem << '\n';

    if (!isCraftable)
        std::cout << "No items can be crafted with current inventory." << '\n';
}

void Inventory::CraftItem(std::map<unsigned int, std::string> &inventory)
{
    std::string craftItem;
    std::cout << "What do you want to craft?: ";
    std::getline(std::cin, craftItem);

    if (craftingRecipes.find(craftItem) != craftingRecipes.end())
    {
        std::vector<std::string> recipe = craftingRecipes[craftItem];

        if (CanCraftItem(inventory, recipe))
        {
            RemoveItemsFromInventory(inventory, recipe);
            unsigned int lastKey = inventory.empty() ? 1 : inventory.rbegin()->first;
            inventory[lastKey + 1] = craftItem;
            std::cout << "Successfully crafted " << craftItem << "!" << std::endl;
        }
        else
        {
            std::cout << "You don't have the necessary ingredients to craft " << craftItem << "." << std::endl;
        }
    }
    else
    {
        std::cout << "Recipe for " << craftItem << " not found." << std::endl;
    }
}

void Inventory::RemoveItemById(std::map<unsigned int, std::string> &inventory)
{
    unsigned int id;
    std::cout << "Input id of the item you want to remove: ";
    std::cin >> id;

    if (inventory.count(id) > 0)
    {
        inventory.erase(id);
        std::cout << "Item removed successfully." << std::endl;
    }
    else
    {
        std::cout << "No item with such id found." << std::endl;
    }
}