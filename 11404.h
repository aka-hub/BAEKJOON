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


int run11404() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);



	int n, m;
	int a, b, c;

	cin >> n;
	cin >> m;

	int INF = 1000000000;
	vector<vector<int>> arr(n + 2, vector<int>(n + 2, INF));

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (arr[a][b] != INF) arr[a][b] = min(c, arr[a][b]);
		else arr[a][b] = c;
	}
	for (int i = 1; i <= n; i++) {
		arr[i][i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (arr[j][i] == INF || arr[i][k] == INF) {
					continue;
				}
				else {
					if (arr[j][i] + arr[i][k] < arr[j][k]) {
						arr[j][k] = arr[j][i] + arr[i][k];
					}
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == INF) cout << "0 ";
			else cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
