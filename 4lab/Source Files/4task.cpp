// DimitriiTrater
// Created by 1 on 22.10.2022
// л
#include <iostream>
#include <random>
#include <chrono>


using namespace std;

int printArray(int array[]) {
    
    return 0;
}


int generalFunctionOfTaskFourLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);
    int size = 23;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = eng() % 20;
    }
    printArray(array);
    delete[] array;
    return 0;
}