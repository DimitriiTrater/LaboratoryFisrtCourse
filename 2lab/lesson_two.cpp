// DimitriiTrater
// Created by 1 on 24.09.2022.
//
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <random>

using namespace std;

void factorial() {
    uint64_t n, a;
    cout << "Enter number:" << endl;
    cin >> n;
    while (n < 0) {
        cout << "Incorrect number" << endl << "Enter number:";
        cin >> n;
    }
    a = 1;
    for (int i = 1; i <= n; i++) {
        a *= i;
    }
    cout << a;
};

void sumNum() {
    int n, m;
    m = 0;
    cout << "Enter number" << endl;
    do {
        cin >> n;
        m += n;
    } while (n != 0);
    cout << m << endl;
};

int fib() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 2) {
        return n;
    }
    int f1 = 0, f2 = 1;
    for (int i = 2; i < n; i++) {
        int f = f2;
        f2 += f1;
        f1 = f;
    }
    return f2;
};

void fromDecToBin() {
    int dec, bin = 0, j;
    cout << "Enter the number: ";
    cin >> dec;
    for (j = 0; dec > 0; j++) {
        bin += (dec % 2) * pow(10, j);
        dec /= 2;
    }
    cout << bin << endl;
};

bool primeNumbers() {
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n == 1 || n == 0) {
        cout << "Zero or One, try again\n";
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "not a prime number\n";
            return true;
        }
    }
    cout << "prime number\n";
    return false;
};

void starPaint() {
    int a;
    cout << "Enter the number:";
    cin >> a;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= a; j++) {
            if (i <= j && (i <= a - j) || (i >= a - j) && i >= j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    }
};

void searchAngle() {
    srand(time(0));

    double xn = 1.0 + ((double)rand() / RAND_MAX) * (10.0 - 1.0);
    double yn = 1.0 + ((double)rand() / RAND_MAX) * (10.0 - 1.0);
    double pif;

    //cout << xn << " " << yn;

    pif = (xn * xn) + (yn * yn);

    double gip = sqrt(pif);
    double ang = asin(xn / gip);
    double sin_ang = ang * (180 / M_PI);

    cout << sin_ang;
};

double searchLen() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, a, b, c;
    cout << "Enter the x1, y1:";
    cin >> x1 >> y1;
    cout << "Enter the x2, y2:";
    cin >> x2 >> y2;
    a = pow((x2 - x1), 2.);
    b = pow((y2 - y1), 2.);
    c = sqrt(a + b);
    cout << c;
    return 0;
};

double searchSquare() {
    double a, b, c, discr, x1, x2;
    cout << "The quadratic equation has the form: ax^2 + bx + c = 0" << "\n" << "Enter the a:";
    cin >> a;
    cout << "Enter the b:";
    cin >> b;
    cout << "Enter the c:";
    cin >> c;
    discr = pow(b, 2) - 4 * a * c;
    if (discr > 0) {
        x1 = (-b + sqrt(discr)) / (2 * a);
        x2 = (-b - sqrt(discr)) / (2 * a);
        cout << "Squares:" << " " << x1 << " and " << x2;
    } else if (discr == 0) {
        x1 = (-b + sqrt(discr)) / (2 * a);
        cout << "Only 1:" << " " << x1;
    } else {
        cout << "NoOne";
    }
    return 0;
}

int uKnowNum() {
    srand(time(0));
    int right = 0, no_right = 0, answer;
    int roll = 1;
    int count = 0;
    int people_number;
    int random_value = rand() % 10;
    do {
        cout << "Computer has a number(0-10). Enter this number:";
        cin >> people_number;
        count++;
        if (count == 3) {
            no_right++;
            cout << "U loss\n" << "0.Over. " << "\n" << "1.Retry." << endl;
            cin >> answer;
            if (answer) {
                count = 0;
                cout << "right " << right << "\n" << "bad " << no_right << "\n";
            } else {
                roll = 0;
                cout << "right " << right << "\n" << "bad " << no_right << "\n";
            }
        } else if (people_number == random_value) {
            right++;
            cout << "U win\n" << "0.Over. " << "\n" << "1.Retry." << endl;
            cin >> answer;
            if (answer) {
                cout << "right " << right << "\n" << "bad " << no_right << "\n";
                srand(time(0));
                int random_value = rand() % 10;
                count = 0;
            } else {
                roll = 0;
                cout << "right " << right << "\n" << "bad " << no_right << "\n";
            }

        }

    } while (roll);
    cout << random_value;


    return 0;
}
