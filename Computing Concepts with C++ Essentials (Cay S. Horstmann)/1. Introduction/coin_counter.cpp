#include <iostream>

using namespace std;

int main()
{
    int pennies, dimes, quarters;

    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    double total = pennies * 0.01 + dimes * 0.1 + quarters * 0.25;
        /* total value of the coins */

    cout << "Total value = " << total << "\n";

    return 0;
}
