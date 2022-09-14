#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

int run1065() {

	int N; 
	int count = 99;
	cin >> N;

	if ((N >= 1) && (N < 100)) {
		cout << N;
		return 0;
	}

	int a, b, c;

	for (int i = 100; i <= N; i++) {
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if ((c - b) == (b - a)) {
			count++;
			
		}
	}
	cout << count;




}