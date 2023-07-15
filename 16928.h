#pragma once
#include <iostream>
#include <utility>
#include <queue>
#include <vector>

using namespace std;

int run16928() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v[102];

	int n, m;
	int x, y;
	bool visited[102] = { false, };
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v[x].push_back(y);
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
	}



	queue<pair<int, int>> q;

	q.push(make_pair(1, 0));
	visited[1] = true;

	while (!q.empty()){
		x = q.front().first;
		y = q.front().second;
		if (x == 100) {
			cout << y;
			break;
		}
		q.pop();
		for (int i = 1; i <= 6; i++) {
			if (x + i > 100 || visited[x + i] == true) {
				continue;
			}
			visited[x + i] = true;
			if(v[x+i].empty()){
				q.push(make_pair(x + i, y + 1));
			}
			else {
				q.push(make_pair(v[x + i][0], y + 1));
			}

		}
	}

	return 0;
}

	