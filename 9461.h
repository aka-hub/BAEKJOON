#pragma once
#include <iostream>

using namespace std;

void run9461() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	 // (1 ¡Â N ¡Â 100)
	long long arr[101] = { 0,1,1,1,2,2,3,4,5,7,9 };
	for (int i = 10; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}
	int t;
	int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n] << "\n";
	}
}