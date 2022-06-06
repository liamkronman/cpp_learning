#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char c;
    std::cin >> c;
    
    // explicit type conversion
    // std::cout << "You entered \'" << c << "\', which has ASCII code " << static_cast<int>(c) << ".\n";

    // implicit type conversion
    int ascii = c;
    std::cout << "You entered '" << c << "', which has ASCII code " << ascii << ".\n";

    return 0;
}