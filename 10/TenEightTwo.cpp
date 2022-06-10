#include <iostream>

struct Fraction
{
    int num { 0 };
    int den { 1 };
};

Fraction getFraction()
{
    Fraction f;

    std::cout << "Enter a value for the numerator: ";
    std::cin >> f.num;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> f.den;

    std::cout << '\n';

    return f;
}

Fraction multiplyFractions(const Fraction& f1, const Fraction& f2)
{
    return { f1.num * f2.num, f1.den * f2.den };
}

void printFraction(const Fraction& f)
{
    std::cout << f.num << "/" << f.den;
}

int main()
{
    Fraction f1 { getFraction() };  
    Fraction f2 { getFraction() };

    std::cout << "Your fractions multiplied together: ";
    printFraction(multiplyFractions(f1, f2));
    std::cout << '\n';
    
    return 0;
}