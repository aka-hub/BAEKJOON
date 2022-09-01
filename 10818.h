#pragma once
#include <iostream>
using namespace std;

void run10818() {

	int N;
	int maxnum = -1000000;
	int minnum = 1000000;
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num >= maxnum) {
			maxnum = num;
		}
		if (num <= minnum) {
			minnum = num;

		}

	}
	cout << minnum << " " << maxnum;

}