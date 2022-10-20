// DimitriiTrater
// Created by 1 on 19.10.2022
//
#include <iostream>
#include <string>

using namespace std;



int generalFunctionOfTaskTwoLabFour() {
    int size = 0;
    cout << "Enter the size array:";
    cin >> size;
    int* array_one = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array_one[i];
    }
    int* array_two = new int[size];
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            array_two[i] = array_one[i] * 2;
        } else {
            array_two[i] = array_one[i] * 3;
        }
    }
    delete[] array_one;
    cout << "New elements:" << "\n";
    for (int i = 0; i < size; i++) {
        cout << array_two[i] << "\t";
    }
    delete[] array_two;
    
    return 0;
}