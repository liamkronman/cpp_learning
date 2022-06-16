#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <random>
#include <vector>

using list_type = std::vector<int>;

namespace config
{
    constexpr int multiplierMin{ 2 };
    constexpr int multiplierMax{ 4 };
    constexpr int maximumWrongAnswer{ 4 };
}

int getRandomInt(int min, int max)
{
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    return std::uniform_int_distribution{ min, max }(mt);
}

list_type generateNumbers(int start, int count, int multiplier)
{
    list_type numbers(static_cast<list_type::size_type>(count));

    int i{ start };

    for (auto& number : numbers)
    {
        number = ((i * i) * multiplier);
        ++i;
    }

    return numbers;
}

void printTask(list_type::size_type count, int multiplier)
{
    std::cout << "I generated " << count << " square numbers. Do you know what each number is after multiplying by " << multiplier << "?\n";
}

int getUserGuess()
{
    int guess {};
    std::cout << "> ";
    std::cin >> guess;

    return guess;
}

bool findAndRemove(list_type& numbers, int guess)
{
    auto found{ std::find(numbers.begin(), numbers.end(), guess) };
    
    if (found == numbers.end())
    {
        return false;
    }
    else
    {
        numbers.erase(found);
        return true;
    }
}

void printSuccess(list_type::size_type numbersLeft)
{
    std::cout << "Nice! ";

    if (numbersLeft == 0)
    {
        std::cout << "You found all numbers, good job!\n";
    }
    else
    {
        std::cout << numbersLeft << " numbers(s) left.\n";
    }
}

int findClosestNumber(list_type& numbers, int guess)
{
    return *std::min_element(numbers.begin(), numbers.end(), [=](int a, int b) {
        return (std::abs(a - guess) < std::abs(b - guess));
    });
}

void printFailure(list_type& numbers, int guess)
{
    int closest{ findClosestNumber(numbers, guess) };

    std::cout << guess << " is wrong!";
    
    if (std::abs(closest - guess) <= config::maximumWrongAnswer)
    {
        std::cout << " Try " << closest << " next time.\n";
    }
    else
    {
        std::cout << '\n';
    }
}

bool playRound(list_type& numbers)
{
    int guess { getUserGuess() };

    if (findAndRemove(numbers, guess))
    {
        printSuccess(numbers.size());

        return !numbers.empty();
    }
    else
    {
        printFailure(numbers, guess);
        return false;
    }
}

int main()
{
    int multiplier{ getRandomInt(config::multiplierMin, config::multiplierMax) };
    
    int start {};
    std::cout << "Start where? ";
    std::cin >> start;

    int count {};
    std::cout << "How many? ";
    std::cin >> count;

    list_type numbers{ generateNumbers(start, count, multiplier) };

    printTask(numbers.size(), multiplier);

    while (playRound(numbers))
        ;

    return 0;
}