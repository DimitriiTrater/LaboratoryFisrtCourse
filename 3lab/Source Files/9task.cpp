// DimitriiTrater
// Created by 1 on 17.10.2022.
//
#include <iostream>

using namespace std;
 
bool primeNumbers(int n, int i = 2) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return primeNumbers(n, i + 1);
}
 

int generalFunctionOfTaskNineLabThree() {
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    if (primeNumbers(n)) {
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}