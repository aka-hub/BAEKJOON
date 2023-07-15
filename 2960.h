#pragma once
#include <iostream>

using namespace std;

void run2960() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K;
	int era[1000] = { 0, };
	int count = 0;
	int prime = 2;
	cin >> N >> K;

	if (N /2 >= K) {
		cout << K * 2;
		return;
	}
	for (int i = 1; i <= N/2; i++) {
		era[i * prime]++;
	}
	count = N / 2;
	prime++; // 3

	while (count!=K) {
		for (int i = 1; i <= N / prime; i++) {
			if (era[prime * i] == 0) {
				count++;
				era[prime * i]++;
				if (count == K) {
					cout << prime * i;
					return;
				}
			}
		}
		for (int i = 1; i < N/2; i++) {
			if (era[prime + i * 2] == 0) {
				prime = prime + i * 2;
				break;
			}
		}
	}
	
}