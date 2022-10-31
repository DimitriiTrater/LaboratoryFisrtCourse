#include <iostream>

using namespace std;


void matrixSum(const int rows, const int cols, int A[][2], int B[][2], int C[][2]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << C[i][j] << "\t";
        } cout << endl;
    }
}





int generalFunctionOfTaskSevenLabFour() {
    const int rows = 2;
    const int cols = 2;

    int a[rows][cols] = {
        {1, 1},
        {1, 1},
    };

    int b[rows][cols] = {
        {2, 2},
        {2, 2},
    };

    int c[rows][cols] = {
        {0, 0},
        {0, 0},
    };
    
    matrixSum(rows, cols, a, b, c);
    return 0;
}