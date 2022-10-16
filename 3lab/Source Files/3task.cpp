//
// Created by 1 on 13.10.2022.
//
#include <iostream>
#include "cmath"

using namespace std;

double searchLen(double x1, double y1, double x2, double y2) {
    double a = sqrt(pow((x2 - x1), 2.) + pow((y2 - y1), 2.));
    return a;
}

double searchLen(double x1, double y1) {
    double a = sqrt(pow(x1, 2.) + pow(y1, 2.));
    return a;
}

double generalFunctionOfTaskThree() {
    double x1, y1, x2, y2;
    int a;
    cout << "2 or 4:";
    cin >> a;
    if (a == 4) {
        cout << "Enter the x1, y1:";
        cin >> x1 >> y1;
        cout << "Enter the x2, y2:";
        cin >> x2 >> y2;
        return searchLen(x1, y1, x2, y2);
    } else if (a == 2) {
        cout << "Enter the x1, y1:";
        cin >> x1 >> y1;
        return searchLen(x1, y1);
    }
    return 1;
}