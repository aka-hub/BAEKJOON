#pragma once
#include <iostream>
#include <cmath>

using namespace std;
	


void run11726() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long arr[1001] = { 0, };
	arr[1] = 1;
	arr[2] = 2;
	int n;
	cin >> n;

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}




	cout << arr[n];
}