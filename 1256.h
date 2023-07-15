#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;

int run1256() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int INF = 1000000001;
	int n, m, k;
	cin >> n >> m >> k;
	int arr[101][101] = { 0, };
	for (int i = 1; i <= 100; i++) {
		arr[0][i] = 1;
		arr[i][0] = 1;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j-1];
			if (arr[i][j] > INF) arr[i][j] = INF;
		}
	}
	if (arr[n][m] < k) {
		cout << -1;
		return 0;
	}
	

	//n개의 "a"와 M개의 "z"
	//1 ≤ N, M ≤ 100
	//1 ≤ K ≤ 1000000000 (10^10)

	int a = n;
	int z = m;
	for (int i = 1; i <= n + m; i++) {
		if (a == 0) {
			cout << 'z';
			z--;
		}
		else if (z == 0) {
			cout << 'a';
			a--;
		}
		else if (k <= arr[a-1][z]) {
			cout << 'a';
			a--;
		}
		else {
			k = k - arr[a-1][z];
			cout << 'z';
			z--;
		}
	}

	return 0;

}