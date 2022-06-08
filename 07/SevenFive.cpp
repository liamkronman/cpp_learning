#include <iostream>

int calculate(int a, int b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        default:
            std::cerr << "Not a supported operation.\n";
            return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, %): ";
    char op{};
    std::cin >> op;

    std::cout << x << " " << op << " " << y << " = " << calculate(x, y, op) << '\n';
    
    return 0;
}