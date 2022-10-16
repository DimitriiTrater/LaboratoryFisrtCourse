// DimitriiTrater
// Created by 1 on 17.09.2022.
//
#include <iostream>

using namespace std;

void leap() {
    int year;
    cin >> year;
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
        cout << "not a leap year" << endl;
    } else {
        cout << "leap year" << endl;
    }
};

void seasonName() {
    int month;
    cin >> month;
    if (month == 1 || month == 2 || month == 12) {
        cout << "Winter" << endl;
    } else if (month == 3 || month == 4 || month == 5) {
        cout << "Spring" << endl;
    } else if (month == 6 || month == 7 || month == 8) {
        cout << "Summer" << endl;
    } else if (month == 9 || month == 10 || month == 11) {
        cout << "Autumn" << endl;
    } else {
        cout << "LOL IDK" << endl;
    }
};

void degreeConversion() {
    double celsius, fahrenheit, kelvin, num;
    cout << "What do you want to do?" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cin >> num;
    if (num == 1) {
        cout << "Celsius: ";
        cin >> celsius;
        cout << "\n";
        cout << "Answer: " << (celsius * 9 / 5) + 32 << endl;
    } else if (num == 2) {
        cout << "Fahrenheit: ";
        cin >> fahrenheit;
        cout << "\n";
        cout << "Answer:" << (fahrenheit - 32) * 5 / 9 << endl;
    } else if (num == 3) {
        cout << "Celsius: ";
        cin >> celsius;
        cout << "\n";
        cout << "Answer:" << (celsius + 273.15) << endl;
    } else if (num == 4) {
        cout << "Kelvin: ";
        cin >> kelvin;
        cout << "\n";
        cout << "Answer:" << (kelvin - 273.15) << endl;
    } else {
        cout << "LOL IDK";
    }
};

void sideComparison() {
    double a, b, c;
    cout << "Enter the sides of the triangle:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b > c && a + c > b && c + b > a) {
        cout << "Triangle exists" << endl;
    } else {
        cout << "Triangle does not exist" << endl;
    }
};

void calculator() {
    int a, b;
    char op;
    cout << "Enter A and B" << endl;
    cout << "A: ";
    cin >> a;
    cout << "\nB: ";
    cin >> b;
    cout << "\nWhat do you want to do?" << endl;
    cin >> op;
    cout << "\n";
    if (op == '+') {
        cout << a + b << endl;
    } else if (op == '-') {
        cout << a - b << endl;
    } else if (op == '*') {
        cout << a * b << endl;
    } else if (b == 0 && (op == '/' || op == '%')) {
        cout << "LOL MAN, NO ZERO AND /" << endl;
    } else if (op == '%') {
        cout << a % b << endl;
    } else if (op == '/') {
        cout << a / b << endl;
    }
};

void maxNum() {
    int a, b, c;
    cout << "Enter a, b, c" << endl;
    cout << "a: ";
    cin >> a;
    cout << "\nb: ";
    cin >> b;
    cout << "\nc: ";
    cin >> c;
    if (a > b && a > c) {
        cout << "\na - max" << endl;
    } else if (b > a && b > c) {
        cout << "\nb - max" << endl;
    } else if (c > a && c > b) {
        cout << "\nc - max" << endl;
    } else if (a == b && a == c) {
        cout << "\na = b = c" << endl;
    } else if ((a == b) && (a > c) && (b > c)) {
        cout << "\na = b > c" << endl;
    } else if ((a == c) && (a > b) && (c > b)) {
        cout << "\na = c > b" << endl;
    } else if ((b == c) && (b > a) && (c > a)) {
        cout << "\nb = c > a" << endl;
    } else {
        cout << "\nIts not good way" << endl;
    }
};

void moneyName() {
    int k;
    cout << "Enter K: ";
    cin >> k;
    if (k % 10 == 1) {
        cout << k << " kopeyka";
    } else if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4) {
        cout << k << " kopeyki";
    } else {
        cout << k << " kopeek";
    }
};

void date() {
    int y, m, d;
    cout << "Enter year, month, day" << endl;
    cout << "Year: ";
    cin >> y;
    cout << "\nMonth: ";
    cin >> m;
    cout << "\nDay: ";
    cin >> d;
    if (m == 1 || m == 2) {
        m += 12;
        y--;
    }
    int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    switch (iWeek) {
        case 0:
            cout << "Monday" << endl;
            break;
        case 1:
            cout << "Tuesday" << endl;
            break;
        case 2:
            cout << "Wednesday" << endl;
            break;
        case 3:
            cout << "Thursday" << endl;
            break;
        case 4:
            cout << "Friday" << endl;
            break;
        case 5:
            cout << "Saturday" << endl;
            break;
        case 6:
            cout << "Sunday" << endl;
            break;
    }
};

void cosN() {
    int n;
    cout << "Enter the degree of the cosine derivative: ";
    cin >> n;
    if (n % 4 == 0) {
        cout << "cos(x)" << endl;
    } else if (n % 4 == 1) {
        cout << "-sin(x)" << endl;
    } else if (n % 4 == 2) {
        cout << "-cos(x)" << endl;
    } else if (n % 4 == 3) {
        cout << "sin(x)" << endl;
    } else {
        cout << "idk man" << endl;
    }
};

void powerTwo() {
    int n, r, k;
    cout << "Enter degree: " << endl;
    cin >> n;
    if (n < 0) {
        cout << "Lol man" << endl;
    } else if (n == 0) {
        cout << "Answer: " << 1 << endl;
    } else if (n > 0) {
        k = n - 1;
        r = 2 << k;
        cout << "Answer: " << r;
    } else {
        cout << "Lol man" << endl;
    }

};