#include <iostream>

int main()
{
    double bottles;
    
    std::cout << std::endl;
    std::cout << "How many bottles do you have? ";
    std::cin >> bottles;

    double cans;
    std::cout << "How many cans do you have? ";
    std::cin >> cans;

    const double BOTTLE_VOLUME = 2.0;
    const double CAN_VOLUME = 0.355;
    double total = bottles * BOTTLE_VOLUME + cans * CAN_VOLUME;

    std::cout << std::endl;
    std::cout << "The total volume is = " << total << "L." << std::endl;
    std::cout << std::endl;

    return 0;
}
