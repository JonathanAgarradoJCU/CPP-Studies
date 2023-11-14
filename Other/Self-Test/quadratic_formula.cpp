#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, discriminant, root1, root2;

    cout << endl;

    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << endl;
        
        cout << "The roots of the quadratic equation are:" << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
        } else if (discriminant == 0) {
        root1 = -b / (2 * a);

        cout << "The quadratic equation has a single root:" << endl;
        cout << "x = " << root1 << endl;
    } else {
        cout << "The quadratic equation has no real roots." << endl;
    }

    cout << endl;

    return 0;
}