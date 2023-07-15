#pragma once
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int run2667() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int d[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} };
	queue<pair<int, int>> q;
	vector<int> v;
	int n;
	string s;
	int arr[27][27] = { -2, };
	bool visited[27][27] = { false, };
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			if (s[j] == '0') {
				arr[i][j + 1] = 0;
			}
			else if (s[j] == '1') {
				arr[i][j + 1] = 1;
			}
		}
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			if (visited[i][j] == false && arr[i][j] == 1) {
				visited[i][j] = true;
				q.push(make_pair(i, j));
				int v_count = 0;
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;

					for (int k = 0; k < 4; k++) {
						if (arr[x + d[k][0]][y + d[k][1]] == 1 && visited[x + d[k][0]][y + d[k][1]] == false) {
							q.push(make_pair(x + d[k][0], y + d[k][1]));
							visited[x + d[k][0]][y + d[k][1]] = true;
							v_count++;
						}

					}
					q.pop();

				}
				v.push_back(v_count);
			}

		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	
	for (auto k = v.begin(); k != v.end(); k++) {
		cout << *k+1 << "\n";
	}
	return 0;

}