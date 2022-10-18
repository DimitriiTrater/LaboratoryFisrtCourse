// DimitriiTrater
// Created by 1 on 18.10.2022
//
#include <iostream>

using namespace std;

void hanoy(int n, char from, char free, char to) { 
	if(n==1) {
		cout << "Move Disk " << n <<" from "<< from << " to " << to << endl;
		return;
	}
    
	hanoy(n - 1, from, to, free);

	cout<< "Move Disk " << n << " from " << from << " to " << to << endl;
	
    hanoy(n - 1, free, from, to);
}

int generalFunctionOfTaskTen() {
    int disc_val = 0;
    cout << "Enter the number: ";
    cin >> disc_val;
    if(disc_val == 0) return 1;
    hanoy(disc_val,'A','B','C');
    return 0;
}
