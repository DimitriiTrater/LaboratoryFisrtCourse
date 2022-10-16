//
// Created by 1 on 13.10.2022.
//

#include <iostream>
#include "cmath"

using namespace std;

double searchQuadraticIfDiscrGreatThenZero(double &x1, double &x2, double b, double discr, double a) {
    x1 = (-b + sqrt(discr)) / (2 * a);
    x2 = (-b - sqrt(discr)) / (2 * a);
    return 0;
}

double searchQuadraticIfDiscrEqualZero(double &x1, double b, double discr, double a) {
    x1 = (-b + sqrt(discr)) / (2 * a);
    return 0;
}


double generalFunctionOfTaskFour() {
    double a, b, c, discr, x1, x2;
    cout << "The quadratic equation has the form: ax^2 + bx + c = 0" << "\n" << "Enter the a:";
    cin >> a;
    cout << "Enter the b:";
    cin >> b;
    cout << "Enter the c:";
    cin >> c;
    discr = pow(b, 2) - 4 * a * c;
    if (discr > 0) {
        searchQuadraticIfDiscrGreatThenZero(x1, x2, b, discr, a);
        cout << "Squares:" << " " << x1 << " and " << x2;
    } else if (discr == 0) {
        searchQuadraticIfDiscrEqualZero(x1, b, discr, a);
        cout << "Only 1: " << x1;
    }
    return 0;
}
