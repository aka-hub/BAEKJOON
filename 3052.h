#pragma once
#include <iostream>
using namespace std;

void run3052() {

	int A, B;
	int count=0;
	int rest[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		cin >> A;
		rest[A % 42]++;
	}

	for(int k = 0; k < 42; k++){
		if (rest[k] > 0) {
			count++; 
		}
	}
	cout << count;
}

