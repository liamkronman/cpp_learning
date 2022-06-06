#include <iostream>

int doubleNumber(int num)
{
    return 2 * num;
}

int main()
{
    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;

    std::cout << "Double of " << n << " is " << doubleNumber(n) << '\n';

    return 0;
}