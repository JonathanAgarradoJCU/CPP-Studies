#include <iostream>
#include <string>

using namespace std;

void mysteryFunction(string* const someString)
{
    *someString = "Test"; 
}

int main()
{
    string myString { "The string" };
    mysteryFunction(&myString);
    cout << myString << endl;
    return 0;
}
