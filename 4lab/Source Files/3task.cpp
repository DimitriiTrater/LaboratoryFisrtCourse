// DimitriiTrater
// Created by 1 on 20.10.2022
//
#include <iostream>
#include <chrono>
#include <random>


using namespace std;

void changeArray(int array[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] == 5) {
            array[i] = 1;
        } else if (array[i] == 2){
            array[i] = 0;
        }
    }
}

int generalFunctionOfTaskThreeLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);
    int SIZE = 15;
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array[i] = eng() % 7;
    }
    
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << "  ";
    }

    cout << "\n--------------------------------------------\n";

    changeArray(array, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << "  ";
    }
    return 0;
}