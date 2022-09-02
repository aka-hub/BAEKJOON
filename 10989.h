#pragma once
#include <iostream>

int arr[10001] = { 0, };

void run10989() {

	int N;
	scanf_s("%d", &N);
	int a;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a);
		arr[a]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int a = 0; a < arr[i]; a++) {
				printf("%d\n", i);
			}
		}
	}
}



//아래 코드는 첫 시도, 메모리 초과 발생
/*
short int arr[10000000] = { 0, };

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}


void quicksort(int left, int right) {
	
	if (left >= right) return;

	int pivot = arr[(left + right) / 2];
	
	int l = left;
	int r = right;

	while (l <= r) {
		while (arr[l] < pivot) l++;
		while (arr[r] > pivot) r--;
		if (l <= r) {
			swap(arr[l], arr[r]);
			l++;
			r--;
		}
	}

	quicksort(left, r);
	quicksort(right, l);
}


void run10989() {


	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	quicksort(0, N-1);

	for (int j = 0; j < N; j++) {
		cout << arr[j] << "\n";
	}

}

*/

