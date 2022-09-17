#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

void run11399() {

	int N;
	cin >> N;
	int sum = 0;
	int arr[1000] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		sum += arr[i] * (N-i);
	}
	
	cout << sum;

}