// DimitriiTrater
// Created by 1 on 15.10.2022.
//
#include <iostream>
#include "cmath"

using namespace std;

// todo: do this some simple, stupid


int uKnowNumNew() {
    
    srand(time(0));

    // variables
    static int right = 0;
    static int no_right = 0;
    int people_number = 0;
    int random_value = rand() % 10;

    cout << "Computer has a number(0-10). Enter this number:";
    cin >> people_number;
    if (people_number == random_value) {
        right++;
        cout << "U win " << " Good: " << right << " Bad: " << no_right;
    } else {
        no_right++;
        cout << "U loss " << " Good: " << right << " Bad: " << no_right;
    }
    cout << "\n";


    cout << random_value;
    return 0;
}

int generalFunctionOfTaskFiveLabThree() {
    uKnowNumNew();
    uKnowNumNew();
    return 0;
}