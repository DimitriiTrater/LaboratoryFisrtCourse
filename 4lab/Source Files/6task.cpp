// DimitriiTrater
// Created by 1 on 29.10.2022
//
#include <iostream>
#define rows 3
#define cols 4
using namespace std;

void transposeFunc(int matrix[rows][cols], int nxt_matrix[cols][rows]) {
    int t;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            nxt_matrix[j][i] = matrix[i][j];
        }
        
    }
}


int generalFunctionOfTaskSixLabFour() {
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},

    };

    int nxt_matrix[cols][rows];
    transposeFunc(matrix, nxt_matrix);
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << nxt_matrix[i][j] << "\t";
        } cout << '\n';
    }
    return 0;
}