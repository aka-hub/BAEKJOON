#pragma once
#include <iostream>
using namespace std;

bool findprime(int num) {
	if (num == 1) return 0;
	if (num == 2 || num == 3 || num == 5) return 1;
	if (num % 2 == 0) return 0;
	if (num % 3 == 0) return 0;
	if (num % 5 == 0) return 0;
	for (int i = 7; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;

}


void run2581() {
	int M, N, check=10000;
	int sum = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		if (findprime(i) == 1) {
			sum += i;
			if (i < check) check = i;
		}
	}
	
	if (sum == 0) {
		cout << "-1";
		return;
	}
	
	cout << sum << "\n" << check;

	

}