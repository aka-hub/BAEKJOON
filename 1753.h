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
#include <climits>

using namespace std;

int run1753() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int v, e;
	int ki;
	int INF = 1000000;
	int d[20005];
	int u_, v_, w_;

	cin >> v >> e;
	cin >> ki;
	vector<pair<int, int>> node[20005];
	priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>> > pq;
	for (int i = 0; i < e; i++) {
		cin >> u_ >> v_ >> w_;
		node[u_].push_back(make_pair(v_, w_));
	}

	for (int i = 1; i <= v; i++) {
		d[i] = INF;
	}
	d[ki] = 0;
	pq.push(make_pair(0, ki));

	while (!pq.empty()) {
		int x = pq.top().first;
		int y = pq.top().second;
		pq.pop();

		for (int i = 0; i < node[y].size(); i++) {
			int next = node[y][i].first;
			int nextc = node[y][i].second;

			if (x + nextc < d[next]) {
				d[next] = x + nextc;
				pq.push(make_pair(x + nextc, next));
			}
		}


	}

	for (int i = 1; i <= v; i++) {
		if (d[i] == INF) {
			cout << "INF\n";
		}
		else {
			cout << d[i]<< "\n";
		}
	}
	return 0;

}

