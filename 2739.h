#pragma once
#include <iostream>
using namespace std;

void run2739() {

	int N;

	cin >> N;

	for (int i = 1; i < 10; i++) {
		cout << N << " * " << i << " = " << N * i << "\n";
	}
}