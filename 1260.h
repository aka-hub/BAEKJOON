#pragma once
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;
bool v1260_dfs[1001];
bool v1260_bfs[1001];
bool line1260[1001][1001];

void dfs1260(int cv, int n) {
	cout << cv << " ";
	v1260_dfs[cv] = true;
	for (int i = 1; i <= n; i++) {
		if (line1260[cv][i]&&!v1260_dfs[i]) {
			dfs1260(i, n);
		}
	}
}

void bfs1260(int cv, int n) {
	queue<int> q;
	q.push(cv);
	v1260_bfs[cv] = true;
	cout << cv << " ";
	while (!q.empty()) {
		cv = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (line1260[cv][i] && !v1260_bfs[i]) {
				q.push(i);
				v1260_bfs[i] = true;
				cout << i << " ";
			}
		}
	}
}

void run1260() {
	int n, m, v;
	//n 정점의 개수 1000
	//m 간선의 개수 10000
	//v 정점의 번호

	int temp1, temp2;
	cin >> n >> m >> v;
	

	for (int i = 0; i < m; i++) {
		cin >> temp1 >> temp2;
		line1260[temp1][temp2] = true;
		line1260[temp2][temp1] = true;
	}
	dfs1260(v, n);
	cout << "\n";
	bfs1260(v, n);
}