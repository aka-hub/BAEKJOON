#pragma once
#include <iostream>
using namespace std;

void run2750() {

	int N;
	int num[1001] = { 0, };
	int number;
	cin >> N;
	for (int i = 0; i < N; i++) {

		cin >> num[i];
		
		for (int j = 0; j < i + 1; j++) {

			if (num[i] < num[j]) {

				number = num[i];
				num[i] = num[j];
				num[j] = number;
			}
		}

	}
	

	for (int i = 0; i < N; i++) {

		cout << num[i] << endl;
	}



}