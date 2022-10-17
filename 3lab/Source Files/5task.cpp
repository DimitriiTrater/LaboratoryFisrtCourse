// DimitriiTrater
// Created by 1 on 15.10.2022.
//
#include <iostream>
#include "cmath"

using namespace std;

// todo: do this some simple, stupid

int uKnowNumNew() {
    srand(time(0));
    static int right = 0;
    static int no_right = 0;
    int answer;
    int roll = 1;
    int count = 0;
    int people_number = 0;
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