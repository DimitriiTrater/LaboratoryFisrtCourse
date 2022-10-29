// DimitriiTrater
// Created by 1 on 29.10.2022
//

#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int sumArray(int** array, int size) {
    int sum1, sum2;
    for (int i = 0; i < size; i++) {
        sum1 += array[i][i];
        sum2 += array[i][size - 1 - i];
    }
    return (sum1 + sum2);
}

int generalFunctionOfTaskFiveLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);

    int size = 20;
    int** array = new int *[size];
    
    for(int i = 0; i < size; i++) {
        array[i]=new int [size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 20; j++) {
            array[i][j] = eng();
        }
    }

    cout << sumArray(array, size);

    for(int i = 0; i < size ; i++) {
        delete[] array[i];
    }
    delete [] array;

    return 0;
}