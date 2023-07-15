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


int n2206, m2206;
int visited2206[1005][1005][2];


int make2206(vector<vector<int>> arr) {


	int dir[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} };

	queue<pair<pair<int, int>, int>> q;

	q.push(make_pair(make_pair(1, 1),1));

	visited2206[1][1][1] = 1;

	while (!q.empty()) {
		int a = q.front().first.first;
		int b = q.front().first.second;
		int c = q.front().second;
		if (a == n2206 && b == m2206) {
			return visited2206[a][b][c];
		}
		for (int i = 0; i < 4; i++) {
			if (arr[a + dir[i][0]][b + dir[i][1]] == -5 && c == 1) {
				q.push(make_pair(make_pair(a + dir[i][0], b + dir[i][1]), 0));
				visited2206[a + dir[i][0]][b + dir[i][1]][0] = visited2206[a][b][1] + 1;
			}
			if (visited2206[a + dir[i][0]][b + dir[i][1]][c] == false && arr[a + dir[i][0]][b + dir[i][1]] == 0) {
				visited2206[a + dir[i][0]][b + dir[i][1]][c] = true;
				visited2206[a + dir[i][0]][b + dir[i][1]][c] = visited2206[a][b][c] + 1;
				q.push(make_pair(make_pair(a + dir[i][0], b + dir[i][1]), c));
			}
		}
		
		q.pop();

	}
	return -1;


}

int run2206() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// N(1 ≤ N ≤ 1,000), M(1 ≤ M ≤ 1,000)
	cin >> n2206 >> m2206;
	vector<vector<int>> arr(n2206+2, vector<int>(m2206+2, -2));
	string str;
	vector<pair<int, int>> v;
	for (int i = 1; i <= n2206; i++) {
		cin >> str;
		for (int j = 0; j < m2206; j++) {
			if (str[j] == '0') {
				arr[i][j + 1] = 0;
			}
			else {
				arr[i][j + 1] = -5;
				v.push_back(make_pair(i, j + 1));
			}
		}
	}
	v.push_back(make_pair(1, 1));
	//최단경로 구하기

	int cnt;

	cout << make2206(arr);
	return 0;
	
}