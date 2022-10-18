// DimitriiTrater
// Created by 1 on 18.10.2022
//
#include <iostream>
#include <ctime>


using namespace std;


void minMax(int array[], int size) {
    int min = array[0], max = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Min:" << min << endl;
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout << "Max: " << max << endl;
}

int generalFunctionOfTaskOneOne() {
    srand(time(0));
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand();
    }
    minMax(array, size);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}