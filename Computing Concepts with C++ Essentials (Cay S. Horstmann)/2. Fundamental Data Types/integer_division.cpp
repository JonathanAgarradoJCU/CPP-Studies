#include <iostream>

using namespace std;

int main()
{
    double s1;
    double s2;
    double s3;

    /*
    int s1;
    int s2; // This will produce an error because
    int s3; // the average is usually a double.
    */

    cout << endl;
    cout << "Please enter your last three test scores: ";

    cin >> s1 >> s2 >> s3;
    double average = (s1 + s2 + s3) / 3;

    cout << endl;
    cout << "Your average is " << average << endl;
    cout << endl;

    return 0;
}
