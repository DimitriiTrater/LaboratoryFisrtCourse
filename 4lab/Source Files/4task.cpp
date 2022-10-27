// DimitriiTrater
// Created by 1 on 22.10.2022
// lщдщлшл
#include <iostream>
#include <random>
#include <chrono>


using namespace std;

void bubleSort(int array[], int size) {
    while (size--) {
        bool swapped = false;
        for(int i = 0; i < size; i++)
		{
			if(array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				swapped = true;
			}
		}
		
		if(swapped == false)
			break;
    }

}

int printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == array[i + 1]) {
            cout << "*";
        } else {
            
        }
    }
    return 0;
}


int generalFunctionOfTaskFourLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);
    cout << "Enter the size array" << endl;
    int size = 0;
    cin >> size;
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = eng() % 20;
    }
    bubleSort(array, size);
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    } cout << endl;
    printArray(array, size);
    delete[] array;
    return 0;
}