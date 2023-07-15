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

int run1913() {
	int n;
	cin >> n;
	string name;
	int dd, mm, yyyy;

	vector<pair<pair<int, int>, pair<int, string>>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}
	sort(v.begin(), v.end());

	cout << v[n - 1].second.second << "\n" << v[0].second.second;
	return 0;
	
}