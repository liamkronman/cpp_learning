#include <iostream>
#include <random>

int getGuess(int count)
{
    while (true)
    {
        std::cout << "Guess #" << count << ": ";
        int guess{};
        std::cin >> guess;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return guess;
    }
}

bool playGame(int guesses, int num)
{
    for (int i{ 1 }; i <= guesses; ++i)
    {
        int guess{ getGuess(i) };

        if (guess == num)
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
        else if (guess < num)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Your guess is too high.\n";
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << num << ".\n";
    return false;
}

bool playAgain()
{
    std::cout << "Would you like to play again (y/n)? ";
    char in{};
    std::cin >> in;
    
    if (in == 'y')
    {
        return true;
    }
    else if (in == 'n')
    {
        return false;
    }
    else
    {
        return playAgain();
    }
}

int main()
{
    std::random_device rd;
    std::seed_seq seq{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{ seq };
    std::uniform_int_distribution die{ 1, 100 };

    constexpr int guesses{ 7 };

    do
    {
        int number{ die(mt) };
        
        std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";

        bool won{ playGame(guesses, number) };
    }
    while (playAgain());

    std::cout << "Thank you for playing.\n";

    return 0;
}