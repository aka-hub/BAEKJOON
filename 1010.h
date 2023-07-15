#pragma once
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int combination(int a, int b) {
	int sum = 1;
	int count = 1;
	for (int i = a+1; i <= b; i++) {
		sum = sum * i;
		if (count <= b - a+1) {
			sum = sum / count;
			count++;
		}
	}

	return sum;
}

void run1010() {

	int T, N, M;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		cout << combination(N, M) << "\n";

	}

}