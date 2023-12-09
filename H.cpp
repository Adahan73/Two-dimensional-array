#include <iostream>
#include <iomanip>
using namespace std;

double determinant(double a, double b, double c, double d) {
    return a * d - b * c;
}

void solveSystem(double a1, double b1, double c1, double a2, double b2, double c2) {
    double detA = determinant(a1, b1, a2, b2);

    if (detA == 0) {
        cout << "No unique solution." << endl;
        return;
    }

    double detAx = determinant(c1, b1, c2, b2);
    double detAy = determinant(a1, c1, a2, c2);

    double x = detAx / detA;
    double y = detAy / detA;

    cout << fixed << std::setprecision(3) << x << endl;
    cout << fixed << std::setprecision(3) << y << endl;
}

int main() {
    double a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    solveSystem(a1, b1, c1, a2, b2, c2);

    return 0;
}