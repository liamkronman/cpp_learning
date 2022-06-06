#include <iostream>
#include <cmath>

int printAndDecrementOne(int x, int pow)
{
    std::cout << '1';
    return x - std::pow(2, pow);
}

int printAndDecrementBit(int x, int pow)
{
    if (x >= std::pow(2, pow))
        return printAndDecrementOne(x, pow);
    
    std::cout << '0';
    return x;
}

int main()
{
    std::cout << "Enter an integer from 0 to 255: ";
    int num;
    std::cin >> num;
    
    num = printAndDecrementBit(num, 7);
    num = printAndDecrementBit(num, 6);
    num = printAndDecrementBit(num, 5);
    num = printAndDecrementBit(num, 4);

    std::cout << ' ';

    num = printAndDecrementBit(num, 3);
    num = printAndDecrementBit(num, 2);
    num = printAndDecrementBit(num, 1);
    num = printAndDecrementBit(num, 0);

    std::cout << '\n';

    return 0;
}