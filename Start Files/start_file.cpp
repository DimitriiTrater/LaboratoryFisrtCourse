// DimitriiTrater
// Created by 1 on 05.10.2022.
//
#include <iostream>
#include "../1lab/lesson.h"
#include "../2lab/lesson_two.h"
#include "../3lab/Header Files/general_header.h"

using namespace std;

int NoOne() {
    cout << "NoOne";
    return 0;
}

int inputTheNumberOfTask() {
    int number = 0;
    cin >> number;
    return number;
}

int checkTheNumberOfTaskOneLaboratory(int number_of_task) {
    switch (number_of_task) {
        case 1:
            leap();
            break;
        case 2:
            seasonName();
            break;
        case 3:
            degreeConversion();
            break;
        case 4:
            sideComparison();
            break;
        case 5:
            calculator();
            break;
        case 6:
            maxNum();
            break;
        case 7:
            moneyName();
            break;
        case 8:
            date();
            break;
        case 9:
            cosN();
            break;
        case 10:
            powerTwo();
            break;
        default:
            NoOne();
            return 1;
    }
    return 0;
}

int checkTheNumberOfTaskTwoLaboratory(int number_of_task) {
    switch (number_of_task) {
        case 1:
            factorial();
            break;
        case 2:
            sumNum();
            break;
        case 3:
            cout << fib();
            break;
        case 4:
            fromDecToBin();
            break;
        case 5:
            cout << primeNumbers();
            break;
        case 6:
            starPaint();
            break;
        case 7:
            searchAngle();
            break;
        case 8:
            searchLen();
            break;
        case 9:
            searchSquare();
            break;
        case 10:
            uKnowNum();
            break;
        default:
            NoOne();
            return 1;
    }
    return 0;
}

int checkTheNumberOfTaskThreeLaboratory(int number_of_task) {
    switch (number_of_task) {
        case 1:
            cout << generalFunctionOfTaskOne();
            break;
        case 2:
            cout << generalFunctionOfTaskTwo();
            break;
        case 3:
            cout << generalFunctionOfTaskThree();
            break;
        case 4:
            generalFunctionOfTaskFour();
            break;
        case 5:
            uKnowNumNew();
            break;
        case 6:
            generalFunctionOfTaskSix();
            break;
        case 7:
            cout << generalFunctionOfTaskSeven();
            break;
        case 8:
            generalFunctionOfTaskEight();
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            NoOne();
            return 1;
    }
    return 0;
}

int checkTheNumberOfLaboratory(int number_of_lab) {
    std::cout << "Enter the number of task:";
    switch (number_of_lab) {
        case 1:
            checkTheNumberOfTaskOneLaboratory(inputTheNumberOfTask());
            break;
        case 2:
            checkTheNumberOfTaskTwoLaboratory(inputTheNumberOfTask());
            break;
        case 3:
            checkTheNumberOfTaskThreeLaboratory(inputTheNumberOfTask());
            break;
        default:
            NoOne();
            return 1;
    }
    return 0;
}