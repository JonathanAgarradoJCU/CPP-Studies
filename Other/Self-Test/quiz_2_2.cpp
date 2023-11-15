#include <iostream>
#include <string>

using namespace std;

int main()
{  
    
int x { 3 };
int& y { x };
y = 4;
cout << x;
// output will be "4" 

    return 0;
}
