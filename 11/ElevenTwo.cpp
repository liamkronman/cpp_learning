#include <iostream>

namespace Animals
{
    enum Animal
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        numOfAnimals
    };
}

int main()
{
    int animalArray[Animals::numOfAnimals] { 2, 4, 4, 4, 2, 0 };
    std::cout << "An elephant has " << animalArray[Animals::elephant] << " legs.\n";

    return 0;
}