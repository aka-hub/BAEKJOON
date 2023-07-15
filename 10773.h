#pragma once
#include <iostream>
#include <vector>
using namespace std;

void run10773() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int K;
	int x;
	vector<int> v;
	int sum = 0;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> x;
		if (x == 0) {
			v.pop_back();
			K -= 2;
			i -= 2;
			continue;
		}
		v.push_back(x);
	}
	for (int i = 0; i < K; i++) {
		sum += v[i];
	}
	cout << sum;
}