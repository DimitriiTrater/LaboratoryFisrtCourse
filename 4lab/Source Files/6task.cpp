// DimitriiTrater
// Created by 1 on 29.10.2022
//
#include <iostream>

using namespace std;

void transposeFunc(int matrix[2][2]) {
    int t;
    for (int i = 0; i < 2; i++) {
        for (int j = i; j < 2; j++) {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
        
    }
}


int generalFunctionOfTaskSixLabFour() {
    int matrix[2][2] = {
        {1, 2},
        {1, 2},
    };
    transposeFunc(matrix);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        } cout << '\n';
    }
    return 0;
}