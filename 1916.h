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


int run1916() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	int a, b, c;
	int start, end;
	int INF = 1000000000;
	int d[20005];
	cin >> n >> m;
	vector<vector<int>> arr(n + 2, vector<int>(n + 2, INF));

	vector<pair<int, int>> node[20005];
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		node[a].push_back(make_pair(b, c));
	}
	for (int i = 1; i <= n; i++) {
		d[i] = INF;
	}
	cin >> start >> end;
	d[start] = 0;
	pq.push(make_pair(0, start));

	while (!pq.empty()) {
		int x = pq.top().first;
		int y = pq.top().second;
		pq.pop();

		if (d[y] < x) {
			continue;
		}

		for (int i = 0; i < node[y].size(); i++) {
			int next = node[y][i].first;
			int nextc = node[y][i].second;

			if (x + nextc < d[next]) {
				d[next] = x + nextc;
				pq.push(make_pair(x + nextc, next));
			}
		}
	}
	cout << d[end];
	return 0;
}






