// DimitriiTrater
// Created by 1 on 20.10.2022
//
#include <iostream>
#include <ctime>


using namespace std;

void changeArray(int array[], int SIZE) {

}

int generalFunctionOfTaskThreeLabFour() {
    srand(time(0));
    int SIZE = 15;
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 7;
    }
    changeArray(array, SIZE);
    return 0;
}