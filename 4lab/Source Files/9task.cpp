#include <iostream>
#include <random>
#include <chrono>

using namespace std;



int generalFunctionOfTaskNineLabFour() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(2, 5);

    int rows = 5;
    int columns = 6;

    

    string students[rows] = {
        "John",
        "Pam",
        "Kevin",
        "Dwight",
        "Angela",
    };
    int** array = new int* [rows];
    
    for(int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        int two = 0;
        int five = 0;

        cout << students[i] << ":\t\t";

        for (int j = 0; j < columns; j++) {
            array[i][j] = dist(mt);
            cout << array[i][j] << "\t";
            if (array[i][j] == 2) {
                two++;
            }
            if (array[i][j] == 5) {
                five++;
            }
        }
        if (two > 0) {
            cout << " - BAD";
        } else if (five == 6) {
            cout << " - GOOD";
        } else {
            cout << " - MEDIUM";
        } cout << endl;
    }



    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    
    delete[] array;

    return 0;
}