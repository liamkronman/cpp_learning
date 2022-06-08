#include <iostream>

int sumTo(int value)
{
    int sum{ 0 };
    for (int i{ 1 }; i <= value; ++i)
    {
        sum += i;
    }
    
    return sum;
}

int main()
{
    std::cout << "Enter an integer value: ";
    int num{};
    std::cin >> num;

    std::cout << "Sum from 1 to " << num << " is " << sumTo(num) << '\n';
    
    return 0;
}