// DimitriiTrater
// Created by 1 on 18.10.2022
//
#include <iostream>
#include <ctime>
#include <random>
#include <chrono>


using namespace std;


void minMax(int array[], int size, int& max, int& min) {
    min = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
}

int generalFunctionOfTaskOneLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);

    int max;
    int min;
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = eng();
    }
    minMax(array, size, max, min);
    cout << "Max: " << max << "\nMin: " << min << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}