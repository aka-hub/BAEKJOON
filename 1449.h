#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void run1449() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, L;
	cin >> N >> L;
	int k;
	vector<int> v;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> k;
		v.push_back(k);

	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		for (int j = 1; j <= L; j++) {
			if (i + j >= v.size()) {
				i = i + j - 1;
				count++;
				break;
			}
			if (v[i + j] >= v[i] + L) {
				count++;
				i = i + j - 1;
				break;
			}

		}
		

	}
	cout << count;


}