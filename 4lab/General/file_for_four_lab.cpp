#include "../Header Files/1task.h"
#include "../Header Files/2task.h"
#include "../Header Files/3task.h"
#include "../Header Files/4task.h"
#include <iostream>

using namespace std;



int checkTheNumberOfTaskFourLaboratory(int number_of_task) {
    switch (number_of_task) {
        case 1:
            generalFunctionOfTaskOneLabFour();
            break;
        case 2:
            generalFunctionOfTaskTwoLabFour();
            break;
        case 3:
            generalFunctionOfTaskThreeLabFour();
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            return 1;
    }
    return 0;
}