#include <iostream>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>
#include <thread>
#define n 5
#define m 5



using namespace std;

void fillWorld(int* world[]) {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            world[i][j] = dist(mt);
        }
    }

}



void printWorld(int* world[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (world[i][j] == 1) {
                cout << "*";
            } else {
                cout << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
}


void copyWorld(int* std_world[], int* nxt_world[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            nxt_world[i][j] = std_world[i][j];
        }
    }
}


void readNB(signed int nb[][2], unsigned int x, unsigned int y) {
    unsigned int k = 0;
    for (unsigned int i = x - 1; i <= x + 1; i++) {
        for (unsigned int j = y - 1; j <= y + 1; j++) {
            if (i == x && j == y) {
                continue;
            }
            nb[k][0] = i;
            nb[k][1] = j;
            k++;
        }
    }
}

unsigned int countLiveNB(int* world [], unsigned int x, unsigned int y) {
    unsigned int count = 0;
    unsigned int i;
    signed int nb[8][2];
    signed int _x, _y;
    readNB(nb, x, y);

    for (i = 0; i < 8; i++) {
        _x = nb[i][0];
        _y = nb[i][1];

        if (_x < 0 || _y < 0) {
            continue;
        }
        
        if (_x >= n || _y >= m) {
            continue;
        }

        if (world[_x][_y] == 1) {
            count++;
        }
    }

    return count;
}


void nxtGen(int* std_world[], int* nxt_world[]) {
    unsigned int live_nb;
    int p;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p = nxt_world[i][j];
            live_nb = countLiveNB(nxt_world, i, j);

            if (p == 0) {
                if (live_nb == 3) {
                    std_world[i][j] = 1;
                }
            } else {
                if (live_nb < 2 || live_nb > 3) {
                    std_world[i][j] = 0;
                }
            }
        }
    }
}

int cmpWorld(int* std_world[], int* nxt_world[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (std_world[i][j] != nxt_world[i][j]) {
                return -1;
            }
        }
    }
    return 0;
}


unsigned int getLiveCount(int* world[]) {
    unsigned int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (world[i][j] == 1) {
                count++;
            }
        }
    }
    return count;
}

int generalFunctionOfTaskTenLabFour() {
    
    // create nxt_world
    int** nxt_world = new int*[n];
    for(int i = 0; i < n; i++) {
        nxt_world[i] = new int[m];
    }

    // create std_world
    int** std_world = new int*[n];
    for(int i = 0; i < n; i++) {
        std_world[i] = new int[m];
    }
    
    fillWorld(std_world);
    unsigned int live = -1;
    bool opt = false;
    do {
        printWorld(std_world);
        copyWorld(std_world, nxt_world);
        nxtGen(std_world, nxt_world);

        opt = cmpWorld(std_world, nxt_world);
        live = getLiveCount(std_world);

        if (opt) {
            cout << "Opt" << endl;
        }

        if (live == 0) {
            cout << "Dead" << endl;
        }

    } while (live != 0 && !opt);

    
    // delete nxt_world
    for(int i = 0; i < n; i++) {
        delete[] nxt_world[i];
    }

    delete[] nxt_world;
    
    // delete std_world
    for(int i = 0; i < n; i++) {
        delete[] std_world[i];
    }
    delete[] std_world;
    
    return 0;
}