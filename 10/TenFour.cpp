#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal a)
{
    switch (a)
    {
        case Animal::pig:
            return "pig";
        case Animal::chicken:
            return "chicken";
        case Animal::goat:
            return "goat";
        case Animal::cat:
            return "cat";
        case Animal::dog:
            return "dog";
        case Animal::duck:
            return "duck";
        
        default:
            return "???";
    }
}

void printNumberOfLegs(Animal a)
{
    std::cout << "A " << getAnimalName(a) << " has ";
    
    switch (a)
    {
        case Animal::pig:
        case Animal::goat:
        case Animal::cat:
        case Animal::dog:
            std::cout << "4";
            break;
            
        case Animal::chicken:
        case Animal::duck:
            std::cout << "2";
            break;
        
        default:
            std::cout << "???";
            break;
    }

    std::cout << " legs.\n";
}

int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    
    return 0;
}