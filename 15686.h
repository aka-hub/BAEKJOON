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

int run15686() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[53][53] = { 0, };
	int n, m;
	vector<pair<int, int>> p;
	vector<pair<int, int>> c;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				p.push_back(make_pair(i, j));
			}
			else if (arr[i][j] == 2) {
				c.push_back(make_pair(i, j));
			}
		}
	}
	vector<int> temp;
	for (int i = 0; i < c.size() - m; i++) {
		temp.push_back(0);
	}
	for (int i = 0; i < m; i++) {
		temp.push_back(1);
	}
	int leng = 10000000;
	
	do {
		int count = 0;
		vector<int> vc(101, 100);
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == 1) {
				for (int j = 0; j < p.size(); j++) {			
					int k = abs(p[j].first - c[i].first) + abs(p[j].second - c[i].second);
					if (k < vc[j]) vc[j] = k;
				}
			}
		}
		for (int i = 0; i < p.size(); i++) {
			count += vc[i];
		}
		if (count < leng) leng = count;
	} while (next_permutation(temp.begin(), temp.end()));

	cout << leng;
	return 0;
}