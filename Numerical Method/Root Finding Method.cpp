#include <iostream>
#include <cmath>
using namespace std;

// Function: f(x) = x^3 - x - 2

double f(double x) {
    return x * x * x - x - 2;
}

int main() {
    double a, b, c;
    int iterations;

    cout << "Enter the interval (a and b): ";
    cin >> a >> b;

    cout << "Enter the number of iterations: ";
    cin >> iterations;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. Root does not exist in this interval." << endl;
        return 0;
    }

    for (int i = 1; i <= iterations; i++) {
        c = (a + b) / 2;

        if (f(c) == 0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Approximate root = " << c << endl;

    return 0;
}
