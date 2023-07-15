#pragma once
#include <iostream>
#include <queue>
#include <utility>

using namespace std;


int bugfood1(int arr[53][53], int m, int n) {


	int dir[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} };
	int count = 0;
	bool visited[53][53] = { false, };
	queue<pair<int, int>> q;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 1 && visited[i][j] == false) {
				visited[i][j] = true;
				q.push(make_pair(i, j));
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for (int k = 0; k < 4; k++) {
						if (arr[x + dir[k][0]][y + dir[k][1]] == 1 && visited[x + dir[k][0]][y + dir[k][1]] == false) {
							visited[x + dir[k][0]][y + dir[k][1]] = true;
							q.push(make_pair(x + dir[k][0], y + dir[k][1]));
						}
					}
					
				}
				count++;
			}
		}
	}
	

	return count;
}

int run1012() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, m, n, k;
	int x, y;

	cin >> t;
	for (int i = 0; i < t; i++) {
		int arr[53][53] = { 0, };
		queue<pair<int, int>> q;
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			cin >> y >> x;
			arr[x + 1][y + 1] = 1;
			q.push(make_pair(x + 1, y + 1));
		}
		for (int j = 0; j <= m + 1; j++) { 
			arr[0][j] = -2;
			arr[n + 1][j] = -2;
		}
		for (int j = 0; j <= n + 1; j++) {
			arr[j][0] = -2;
			arr[j][m+1] = -2;
		}

		cout << bugfood1(arr, m, n) << "\n";
	}

	return 0;
}