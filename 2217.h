#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void run2217() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int big = 0;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		if (v[i] * (N - i) >= big) big = v[i] * (N - i);
	}
	cout << big;
}