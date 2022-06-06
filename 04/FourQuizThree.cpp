#include <iostream>

double readDouble() 
{
    std::cout << "Enter a double value: ";
    double val;
    std::cin >> val;
    return val;
}

char readOperation() 
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op;
    std::cin >> op;
    return op;
}

void printResult(double val1, double val2, char op)
{
    if (op == '+')
        std::cout << val1 << " " << op << " " << val2 << " is " << val1 + val2 << '\n';
    else if (op == '-')
        std::cout << val1 << " " << op << " " << val2 << " is " << val1 - val2 << '\n';
    else if (op == '*')
        std::cout << val1 << " " << op << " " << val2 << " is " << val1 * val2 << '\n';
    else if (op == '/')
        std::cout << val1 << " " << op << " " << val2 << " is " << val1 / val2 << '\n';
}

int main()
{
    double val1 = readDouble();
    double val2 = readDouble();
    char op = readOperation();
    printResult(val1, val2, op);

    return 0;
}