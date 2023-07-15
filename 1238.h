#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;


int run1238() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<vector<pair<int, int>>> v;
	int n, m, x;
	int a, b, c;
	cin >> n >> m >> x;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
	}