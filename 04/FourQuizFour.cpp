#include <iostream>

double getHeight() 
{
    std::cout << "Enter the height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

double calculateHeight(double initialHeight, int xSecs)
{
    const double gConst = 9.8;
    const double fallenDistance = gConst * (xSecs * xSecs) / 2.0;
    const double newHeight = initialHeight - fallenDistance;
    return newHeight;
}

void printHeight(double initialHeight, int xSecs)
{
    const double height = calculateHeight(initialHeight, xSecs);
    
    if (height > 0)
        std::cout << "At " << xSecs << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << xSecs << " seconds, the ball is on the ground.\n";
}

int main()
{
    double initialHeight = getHeight();

    printHeight(initialHeight, 0);
    printHeight(initialHeight, 1);
    printHeight(initialHeight, 2);
    printHeight(initialHeight, 3);
    printHeight(initialHeight, 4);
    printHeight(initialHeight, 5);

    return 0;
}