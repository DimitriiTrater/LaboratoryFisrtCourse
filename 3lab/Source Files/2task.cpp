//
// Created by 1 on 10.10.2022.
//
#include <iostream>
using namespace std;

double maxNumber(double first, double second) {
    double max = first;
    if (second > max) {
        max = second;
    }
    return max;
}

double maxNumber(double first, double second, double third) {
    double max = first;
    if (second > max) {
        max = second;
    }
    if (third > first) {
        max = third;
    }
    return max;
}

double generalFunctionOfTaskTwo() {
    double a, b, c;
    int count_n;
    cout << "How many numbers?";
    cin >> count_n;
    if (count_n == 2) {
        cout << "A:";
        cin >> a;
        cout << "B:";
        cin >> b;
        return maxNumber(a, b);
    } else if (count_n == 3) {
        cout << "A:";
        cin >> a;
        cout << "B:";
        cin >> b;
        cout << "C:";
        cin >> c;
        return maxNumber(a, b, c);
    }
    return 1;
}