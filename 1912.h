#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <deque>
#include <cmath>

using namespace std;

int run1912() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> v1, v2;
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v1.push_back(temp);
	}
	v2.push_back(v1[0]);
	int maxv = v1[0];
	for (int i = 1; i < n; i++) {
		v2.push_back(v2[i - 1] + v1[i]);
		if (v2[i] < v1[i]) v2[i] = v1[i];
		if (v2[i] > maxv) maxv = v2[i];

	}

	cout << maxv;
	return 0;
}
