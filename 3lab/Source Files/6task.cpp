// DimitriiTrater
// Created by 1 on 15.10.2022.
//
#include <iostream>
#include "cmath"


using namespace std;



double drawCircle(double radius, char symbol) {
    for (double y = radius; y >= -radius; y -= 2) {
        for (double x = -radius; x <= radius; x++) {
            if ((int)sqrt(pow(x, 2) + pow(y, 2)) == radius) {
                cout << symbol;
            } else {
                cout << ' ';
            }
        }cout << "\n";
    }
    return 0;
}

double generalFunctionOfTaskSixLabThree() {
    double r;
    char user_char;

    do {
        cout << "Enter the radius:";
        cin >> r;
    } while (r <= 0);

    cout << "Enter the symbol:";
    cin >> user_char;
    drawCircle(r, user_char);
    return 0;
}


