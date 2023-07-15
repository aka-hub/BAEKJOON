#pragma once
#include <iostream>

using namespace std;

void run10867() {
	//수는 -1000~+1000
	//arr에서 -1000 = 0, 0 = 1000,  1000 = 2000

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[2001] = { 0, };
	int a;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[a + 1000]++;
	}

	for (int i = 0; i <= 2000; i++) {
		if (arr[i] != 0) {
			cout << i - 1000 << " ";
		}
	}

}