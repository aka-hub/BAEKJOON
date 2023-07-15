#pragma once
#include <iostream>
#include <cmath>
using namespace std;

void run1475() {
	// 0123457899 Á¸Àç
	double num[10] = { 0, };

	int N;
	cin >> N;

	for (int i = 0; i < 7; i++) {
		if (N / 10 == 0) {
			num[N % 10]++;
			break;
		}
		num[N % 10]++;
		N = N / 10;
	}
	num[6] += num[9];
	int high = 0;
	for (int j = 0; j < 9; j++) {
		if (j == 6) {
			if (ceil(num[j] / 2) > high) {
				high = ceil(num[j]/2);
				continue;
			}
		}
		else if (num[j] > high) {
			high = num[j];
		}
	}

	cout << high;
}