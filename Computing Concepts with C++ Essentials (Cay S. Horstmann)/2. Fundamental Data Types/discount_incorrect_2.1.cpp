
#include <iostream>

using namespace std;

int main()
{
    long double original_price = 3E14;
    long double discounted_price = original_price * 0.05;
    long double discount = original_price - discounted_price;
    // should be 0.05
    cout << "Discount = " << discount << "\n"; // This prints 2.85e+014....  Result is incorrect!

    return 0;
}
