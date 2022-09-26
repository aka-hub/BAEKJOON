#pragma once
#include <iostream>

using namespace std;

void run11047() {
	int arr[10] = { 0, };
	int N, K;
	int sum;
	int count = 0;
	scanf_s("%d", &N);
	scanf_s("%d", &K);
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	sum = K;
	for (int i = N - 1; i >= 0; i--) {
		if (sum / arr[i] >= 1) {
			count += sum / arr[i];
			sum = sum - arr[i]*(sum / arr[i]);
			
		}
		if (sum == 0) break;
	}

	printf("%d", count);
	
}