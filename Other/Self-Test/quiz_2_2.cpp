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
    }

    // This will compile. The function takes a pointer to a string as a parameter.