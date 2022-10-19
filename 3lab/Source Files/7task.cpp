// DimitriiTrater
// Created by 1 on 16.10.2022.
//

#include <iostream>

using namespace std;

int fib(int num) {
    if (num < 1) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    return fib(num - 1) + fib(num - 2);
}

int generalFunctionOfTaskSevenLabThree() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    return fib(number);
}