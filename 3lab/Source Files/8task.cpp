// DimitriiTrater
// Created by 1 on 16.10.2022
//

#include <iostream>

using namespace std;


void decToBin(int n) {
    if (n >= 2) {
        decToBin(n / 2);
    }
    cout << n % 2;
}

int generalFunctionOfTaskEightLabThree() {
    int n;
    cout << "Enter the n: ";
    cin >> n;
    decToBin(n);
    return 0;    
}


