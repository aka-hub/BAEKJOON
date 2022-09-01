#pragma once
#include <iostream>

using namespace std;

void run2822() {

	int num[8] = { 0, };
	int num2[8] = { 0, };
	int num3[5] = { 0, };
	int sum = 0, temp;

	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 8; i++) {
		num2[i] = num[i];
	}

	
	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8; j++) {

			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
	

		}
	}
	sum = num[0] + num[1] + num[2] + num[3] + num[4];

	cout << sum << "\n";

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			if (num[i] == num2[j]) {
				num3[i] = j + 1;

			}

		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {

			if (num3[i] > num3[j]) {
				temp = num3[i];
				num3[i] = num3[j];
				num3[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << num3[i] << " ";
	}
}