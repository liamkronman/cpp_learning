#include <iostream>

struct Advertising
{
    int numAdsShown {};
    double percentAdsClickedOn {};
    double averageEarningPerClick {};
};

Advertising getAdvertising()
{
    Advertising ad;
    
    std::cout << "How many ads were shown? ";
    std::cin >> ad.numAdsShown;

    std::cout << "What percent of these ads were clicked on? (0.0 - 100.0) ";
    std::cin >> ad.percentAdsClickedOn;

    std::cout << "How much was earned (on average) per click? ";
    std::cin >> ad.averageEarningPerClick;
    
    return ad;
}

double printAndCalculateEarnings(const Advertising& a)
{
    std::cout << a.numAdsShown << " ads shown in total.\n";
    std::cout << a.percentAdsClickedOn << "% of ads were clicked on by users.\n";
    std::cout << "$" << a.averageEarningPerClick << " was earned per click.\n";

    return a.numAdsShown * (a.percentAdsClickedOn / 100) * a.averageEarningPerClick;
}

int main()
{
    Advertising ad { getAdvertising() };

    double totalEarnings { printAndCalculateEarnings(ad) };

    std::cout << "The total earnings are $" << totalEarnings << ".\n";

    return 0;
}