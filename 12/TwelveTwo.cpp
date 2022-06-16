#include <iostream>

int factorial(int num)
{
    if (num <= 0)
        return 1;
    
    return num * factorial(num - 1);
}

int digitSum(int n)
{
    if (n / 10 == 0)
        return n;
    
    return digitSum(n / 10) + (n % 10);
}

void printBinary(unsigned int x)
{
    if (x > 1)
        printBinary(x / 2);

    std::cout << x % 2;
} 

int main()
{
    for (int count{ 1 }; count <= 7; ++count)
        std::cout << factorial(count) << '\n';

    std::cout << digitSum(93427) << '\n';

    int x{};
    std::cout << "Enter an integer to convert to binary: ";
    std::cin >> x;

    printBinary(static_cast<unsigned int>(x));

    std::cout << '\n';

    return 0;
}