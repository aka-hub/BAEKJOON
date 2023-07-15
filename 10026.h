#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>

using namespace std;



int run10026() {
	//. (1 ¡Â N ¡Â 100)
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;

	cin >> n;

	string a;
	static int rgbarr[102][102] = { 0, };
	bool checkrgb[102][102] = { false , };
	bool checkrgb2[102][102] = { false , };
	stack<pair<int, int>> s;
	
	for (int i = 1; i <= n; i++) {
		cin >> a;
		for (int j = 0; j < n; j++) {
			if (a[j] == 'R') {
				rgbarr[i][j+1] = -1;
			}
			else if (a[j] == 'G') {
				rgbarr[i][j+1] = 1;
			}
			else if (a[j] == 'B') {
				rgbarr[i][j+1] = -2;
			}
			
		}
	}

	for (int i = 0; i <= n + 1; i++) {
		rgbarr[0][i] = -5;
		rgbarr[i][0] = -5;
		rgbarr[n+1][i] = -5;
		rgbarr[n+1][0] = -5;
	}
	int rgcount = 0;
	int count = 0;

	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n; y++) {
			if (checkrgb[x][y] == false) {
				checkrgb[x][y] = true;
				s.push(make_pair(x, y));
				while (!s.empty()) {
					int i = s.top().first;
					int j = s.top().second;
					s.pop();
					if ((rgbarr[i + 1][j] == rgbarr[i][j]) && (checkrgb[i + 1][j] == false)) {
						s.push(make_pair(i + 1, j));
						checkrgb[i + 1][j] = true;
					}
					if ((rgbarr[i - 1][j] == rgbarr[i][j]) && (checkrgb[i - 1][j] == false)) {
						s.push(make_pair(i - 1, j));
						checkrgb[i - 1][j] = true;
					}
					if ((rgbarr[i][j + 1] == rgbarr[i][j]) && (checkrgb[i][j + 1] == false)) {
						s.push(make_pair(i, j + 1));
						checkrgb[i][j + 1] = true;
					}
					if ((rgbarr[i][j - 1] == rgbarr[i][j]) && (checkrgb[i][j - 1] == false)) {
						s.push(make_pair(i, j - 1));
						checkrgb[i][j - 1] = true;
					}
					
				}
				count++;
			}



		}
	}
	

	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n; y++) {
			if (checkrgb2[x][y] == false) {
				checkrgb2[x][y] = true;
				s.push(make_pair(x, y));
				while (!s.empty()) {

					int i = s.top().first;
					int j = s.top().second;
					s.pop();
					if ((abs(rgbarr[i + 1][j]) == abs(rgbarr[i][j])) && (checkrgb2[i + 1][j] == false)) {
						s.push(make_pair(i+1, j));
						checkrgb2[i + 1][j] = true;
					}
					if ((abs(rgbarr[i - 1][j]) == abs(rgbarr[i][j])) && (checkrgb2[i - 1][j] == false)) {
						s.push(make_pair(i - 1, j));
						checkrgb2[i - 1][j] = true;
					}
					if ((abs(rgbarr[i][j+1]) == abs(rgbarr[i][j])) && (checkrgb2[i][j+1] == false)) {
						s.push(make_pair(i, j+1));
						checkrgb2[i][j+1] = true;
					}
					if ((abs(rgbarr[i][j - 1]) == abs(rgbarr[i][j])) && (checkrgb2[i][j - 1] == false)) {
						s.push(make_pair(i, j - 1));
						checkrgb2[i][j - 1] = true;
					}
					
				}
				rgcount++;
			}
			

		}
	}

	cout << count << " " << rgcount;
	return 0;
		



	}

	