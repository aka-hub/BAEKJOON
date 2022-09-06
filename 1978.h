#pragma once
#include <iostream>
using namespace std;



void run1978() {

	int N;
	cin >> N;
	int count = 0;
	int a;
	int prime[1001] = { 0, };

	for (int i = 1; i <= N; i++) {
		cin >> a;
		prime[a]++;

	}

	count = count + prime[2];
	
	for (int i = 3; i <= 1000; i = i + 2) {
		exit:
		if (prime[i] != 0) {
			for (int j = 3; j * j <= i; j = j + 2) {
				if (i % j == 0) {
					i += 2;
					goto exit;
				}
			}
			
			count = count + prime[i];
		}
	

	}
	cout << count;
}