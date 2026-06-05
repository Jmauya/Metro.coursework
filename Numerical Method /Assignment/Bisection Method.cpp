#include <iostream>
#include <cmath>
using namespace std;

// Function definition

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a = 1, b = 2, c;
    double tolerance = 0.0001;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval!" << endl;
        return 0;
    }

    while ((b - a) / 2 > tolerance) {
        c = (a + b) / 2;

        if (f(c) == 0.0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Root = " << c << endl;
    return 0;
}
