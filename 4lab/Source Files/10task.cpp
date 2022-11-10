#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

void firstCondition() {

}

void secondCondition() {

}

void thirdCondition() {

}


int generalFunctionOfTaskTenLabFour() {
    int n = 5;
    int m = 5;
    // cout << "Enter the N x M space" << endl;
    // cin >> n >> m;
    int** array = new int*[n];
    for(int i = 0; i < n; i++) {
        array[i] = new int[m];
    }

    delete[] array;
    
    return 0;
}