#include <iostream>
#include <functional>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op{};

    do
    {
        std::cout << "Enter an operation: ";
        std::cin >> op;
    } while (op != '+' && op != '-' && op != '*' && op != '/');
    
    return op;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

using ArithmeticFunction =  std::function<int(int, int)>;

ArithmeticFunction getArithmeticFunction(char op)
{
    switch (op)
    {
        case '+':
            return &add;
        case '-':
            return &subtract;
        case '*':
            return &multiply;
        case '/':
            return &division;

        default:
            return nullptr;
    }
}

int main()
{
    int x{ getInteger() };
    char op{ getOperation() };
    int y{ getInteger() };

    ArithmeticFunction f = getArithmeticFunction(op);

    if (f)
        std::cout << x << ' ' << op << ' ' << y << " = " << f(x, y) << '\n';

    return 0;
}