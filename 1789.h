#pragma once
#include <iostream>
#include <cmath>

using namespace std;

void run1789() {
	long long S;
	long long sum = 0;
	cin >> S;
	int i = 1;
	while (true) {
		sum = sum + i;
		if (sum > S) break;
		i++;

	}

	cout << i - 1;
}