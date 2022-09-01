#pragma once
#include <iostream>
using namespace std;

void run1546() {
	float N, grade, ava;
	float max = 0;
	float total = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> grade;
		total = grade + total;
		if (grade > max) {
			max = grade;
		}

	}
	ava = total / max * 100 / N;
	cout << ava;

}