#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

/*
* 
* static int tc[1003][1003] = { 0, };
	static int toin[1003][1003] = { 0, };
	static bool checktm[1003][1003] = { false };
	int daycount = 0;

	int m, n;
	int count = 0;
	int allcount = 0;

	cin >> m >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf_s("%d", &tc[i][j]);
			if (tc[i][j] == 0) count++;
		}
	}

if (count == 0) {
		cout <<0;
		return 0;
	}

	for (int i = 0; i <= m + 1; i++) { //°ÑÀ» -2À¸·Î °¨½Ñ´Ù
		tc[0][i] = -2;
		tc[n + 1][i] = -2;
	}
	for (int i = 0; i <= n + 1; i++) {
		tc[i][0] = -2;
		tc[i][m + 1] = -2;
	}

	while (count != 0) {
		allcount = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if ((tc[i][j] == 1)&&(checktm[i][j]==false)) {
					toin[i][j + 1]++;
					toin[i][j - 1]++;
					toin[i + 1][j]++;
					toin[i - 1][j]++;
					checktm[i][j] == true;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if ((toin[i][j] > 0) && (tc[i][j] == 0)) {
					tc[i][j] = 1;
					allcount++;
					count--;
				}
			}
		}
		if (allcount == 0) {
			cout << -1;
			return 0;
		}

		daycount++;
	}

	cout << daycount;
	return 0;
*/


int run7576() {


	// 2 ¡Â M,N ¡Â 1,000 
	ios::sync_with_stdio(false);
	static int tc[1003][1003] = { 0, };
	static bool visitedtm[1003][1003] = { false, };

	int m, n;
	queue<pair<int, int>> q;
	scanf_s("%d", &m);
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf_s("%d", &tc[i][j]);
			if (tc[i][j] == 1) {
				q.push(make_pair(i, j));
				visitedtm[i][j] = true;
			}
		}
	}

	for (int i = 0; i <= m + 1; i++) { //°ÑÀ» -2À¸·Î °¨½Ñ´Ù
		tc[0][i] = -2;
		tc[n + 1][i] = -2;
	}
	for (int i = 0; i <= n + 1; i++) {
		tc[i][0] = -2;
		tc[i][m + 1] = -2;
	}

	while (!q.empty()) {
		
		int x = q.front().first;
		int y = q.front().second;
		if ((visitedtm[x + 1][y] == false) && (tc[x + 1][y] == 0)) {
			tc[x + 1][y] = tc[x][y]+1;
			visitedtm[x + 1][y] = true;
			q.push(make_pair(x+1, y));
		}
		if ((visitedtm[x - 1][y] == false) && (tc[x - 1][y] == 0)) {
			tc[x - 1][y] = tc[x][y] + 1;
			visitedtm[x - 1][y] = true;
			q.push(make_pair(x-1, y));

		}
		if ((visitedtm[x][y+1] == false) && (tc[x][y+1] == 0)) {
			tc[x][y+1] = tc[x][y] + 1;
			visitedtm[x][y+1] = true;
			q.push(make_pair(x, y+1));

		}
		if ((visitedtm[x][y-1] == false) && (tc[x][y-1] == 0)) {
			tc[x][y - 1] = tc[x][y] + 1;
			visitedtm[x][y - 1] = true;
			q.push(make_pair(x, y - 1));

		}
		
		q.pop();
	}

	int daycount = 1;

	for (int i = 1; i <= n; i++) { 
		for (int j = 1; j <= m; j++) {
			
			if (tc[i][j] == 0) {
				printf("-1");
				return 0;
			}
			if (daycount < tc[i][j]) {
				daycount = tc[i][j];
			}
		}
	}
	printf("%d", daycount-1);
	return 0;

}