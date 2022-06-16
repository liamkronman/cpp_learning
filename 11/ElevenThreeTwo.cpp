#include <iostream>
#include <iterator>
#include <limits>

int setInt()
{
    int input {};

    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> input;
        // if the user entered something invalid
        if (std::cin.fail())
            std::cin.clear(); // reset any error flags
            
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
    } while (input < 1 || input > 9);

    return input;
}

int main()
{
    int num { setInt() };
    
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    for (int i = 0; i < std::size(array); ++i)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << '\n';

    int ind { -1 };

    for (int i = 0; i < std::size(array); ++i)
    {
        if (array[i] == num)
            ind = i;
    }

    std::cout << "The number " << num << " has index " << ind << '\n';
}