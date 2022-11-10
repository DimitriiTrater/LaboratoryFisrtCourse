#include <iostream>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

using namespace std;

void firstCondition() {

}

void secondCondition() {

}

void thirdCondition() {

}


int generalFunctionOfTaskTenLabFour() {
    sf::Clock clock;
    int n = 5;
    int m = 5;
    // cout << "Enter the N x M space" << endl;
    // cin >> n >> m;
    int** array = new int*[n];
    for(int i = 0; i < n; i++) {
        array[i] = new int[m];
    }
    int a = 1;
    while (a) {
        sf::Time elapsed = clock.restart();
        
        a = 0;
    }


    for(int i = 0; i < n; i++) {
        delete[] array[i];
    }

    delete[] array;
    
    return 0;
}