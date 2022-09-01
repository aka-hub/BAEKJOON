#pragma once
#include <iostream>
using namespace std;

void run2751() {

	int N;
	int temp;

	int num[10] = { 0, };

	cin >> N;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (num[j] > num[j + 1]) {

				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;

			}
			
		}
	}

	for (int i = 0; i < N; i++) {
		cout << num[i] << "\n";
	}

}