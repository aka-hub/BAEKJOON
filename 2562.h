#pragma once
#include <iostream>
using namespace std;

void run2562() {
	int num;
	int maxnum = 1;
	int order;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		if (num > maxnum) {
			maxnum = num;
			order = i + 1;
		}


	}

	cout << maxnum << "\n" << order;

}