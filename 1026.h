#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void run1026() {

	int N, k;
	cin >> N;
	int sum = 0;
	vector<int> b;
	vector<int> a;
	for (int i = 0; i < N; i++) {
		cin >> k;
		a.push_back(k);
	}
	for (int i = 0; i < N; i++) {
		cin >> k;
		b.push_back(k);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < N; i++) {
		sum += a[i] * b[N - i-1];

	}
	cout << sum;
}