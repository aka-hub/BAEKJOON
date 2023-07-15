#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;

	int arr11660[1025][1025] = { 0, };
	int dp[1030][1030] = { 0, };

int run11660() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr11660[i][j];
			dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + arr11660[i][j];
		}
	}

	
	int x1, x2, y1, y2;
	for (int i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1-1][y1-1] << "\n";
	}
	return 0;
}