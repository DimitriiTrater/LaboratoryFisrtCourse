#include <iostream>
#include <random>
#include <chrono>


using namespace std;


void printAveragesArray(int* A[], int B[], int size) {
    int a = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            a += A[i][j];
        }
        B[i] = a;
        a = 0;
        cout << B[i] << " ";
    }


}

int generalFunctionOfTaskEightLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);

    int size = 20;
    int** array = new int* [size];
    for(int i = 0; i < size; i++) {
        array[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = eng() % 20;
        }
    }

    int* B = new int[size];
    
    printAveragesArray(array, B, size);

    for (int i = 0; i < size; i++) {
        delete[] array[i];
    }
    delete[] array;
    delete[] B;
    return 0;
}