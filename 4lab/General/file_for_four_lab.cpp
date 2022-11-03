#include "../Header Files/1task.h"
#include "../Header Files/2task.h"
#include "../Header Files/3task.h"
#include "../Header Files/4task.h"
#include "../Header Files/5task.h"
#include "../Header Files/6task.h"
#include "../Header Files/7task.h"
#include "../Header Files/8task.h"
#include "../Header Files/9task.h"
#include "../Header Files/10task.h"


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
            generalFunctionOfTaskFourLabFour();
            break;
        case 5:
            generalFunctionOfTaskFiveLabFour();
            break;
        case 6:
            generalFunctionOfTaskSixLabFour();
            break;
        case 7:
            generalFunctionOfTaskSevenLabFour();
            break;
        case 8:
            generalFunctionOfTaskEightLabFour();
            break;
        case 9:
            break;
        case 10:
            generalFunctionOfTaskTenLabFour();
            break;
        default:
            return 1;
    }
    return 0;
}