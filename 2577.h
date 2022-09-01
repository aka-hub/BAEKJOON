#pragma once
#include <iostream>
using namespace std;

void run2577() {

	int A, B, C, result, rest;
	int number[10] = { 0, };

	cin >> A;
	cin >> B;
	cin >> C;
	result = A * B * C;

	while (result > 0) {

		rest = result % 10;
		result = result / 10;
		number[rest]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << number[i] << "\n";
	}
}