#include <iostream> //allows use of cout and cin

using namespace std; //allows use of cout and cin without std::

int main() //starts program
{
    int five_cents,   ten_cents,    twenty_cents, 
        fifty_cents,  one_dollar,    two_dollars, 
        five_dollars, ten_dollars, fifty_dollars; //declares variables for each coin value

    int count; // coins counted are added together to get total value


    cout << "# of 0.05 cents: ";
    cin >> count; // counts number of 0.05 cents
    double total = count * 0.05;

    cout << "# of 0.10 cents: ";
    cin >> count; //counts number of 0.10 cents
    total = count * 0.1 + total;

    cout << "# of 0.20 cents: ";
    cin >> count; //counts number of 0.20 cents
    total = count * 0.2 + total;

    cout << "# of 0.50 cents: ";
    cin >> count; //counts number of 0.50 cents
    total = count * 0.5 + total;

    cout << "# of 1.00 dollars: ";
    cin >> count; //counts number of 1.00 dollars
    total = count * 1 + total;

    cout << "# of 2.00 dollars: ";
    cin >> count; //counts number of 2.00 dollars
    total = count * 2 + total;

    cout << "# of 5.00 dollars: ";
    cin >> count; //counts number of 5.00 dollars
    total = count * 5 + total;

    cout << "# of 10.00 dollars: ";
    cin >> count; //counts number of 10.00 dollars
    total = count * 10 + total;

    cout << "# of 50.00 dollars: ";
    cin >> count; //counts number of 50.00 dollars
    total = count * 50 + total;


    cout << "Total value = " << total << "\n"; //prints total value\


    if (total > 1000) //if total value is more than 1000
    {
        cout << "You are rich!\n"; //prints "You are rich!"
    }
    else if (total > 100) //if total value is more than 100
    {
        cout << "You are well off!\n"; //prints "You are well off!"
    }
    else if (total > 10) //if total value is more than 10
    {
        cout << "You are doing ok!\n"; //prints "You are doing ok!"
    }
    else //if total value is less than 10
    {
        cout << "You are broke!\n"; //prints "You are broke!"
    }


    return 0; //ends program
}
