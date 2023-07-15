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

int run11054() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	vector<int> v(n);
	vector<int> q;
	int savecnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		q.push_back(v[i]);
		bool visited[1001] = { false, };
		int count = 1;
		int savenum = i;
		while (!q.empty()) {
			for (int j = savenum; j < n; j++) {
				if (q.back() / v[j] == 0) {
					
				}
			}

		}

	}
	