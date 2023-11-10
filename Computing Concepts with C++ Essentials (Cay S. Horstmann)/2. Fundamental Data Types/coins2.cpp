#include <iostream>

using namespace std;

int main()
{
    cout << "How many pennies do you have?: ";
    int pennies;
    cin >> pennies;

    cout << "How many dimes do you have?: ";
    int dimes;
    cin >> dimes;

    cout << "How many quarters do you have?: ";
    int quarters;
    cin >> quarters;

    double total = pennies * 0.01 + 
        dimes * 0.1 + quarters * 0.25;
        /* total value of the coins */
    
    cout << "Total value = " << total << "\n";

    return 0;
}
