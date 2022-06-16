#include <iostream>
#include <iterator>

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };

    int maxIndex{ 0 };

    for (int student{ 1 }; student < static_cast<int>(std::size(scores)); ++student)
    {
        if (scores[student] > scores[maxIndex])
            maxIndex = student;
    }

    std::cout << "The best score is " << scores[maxIndex] << '\n';

    return 0;
}