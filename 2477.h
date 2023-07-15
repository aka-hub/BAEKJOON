#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;



int run2477() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k;
	cin >> k;
	vector<pair<int, int>> v;
	int direction[5] = { 0, };
	int x, y;
	int sum;
	int maxrow, maxcol;
	for (int i = 0; i < 6; i++) {
		cin >> x >> y;
		direction[x]++;
		v.push_back(make_pair(x, y));
	}

	if (direction[1] == 2) { //µ¿
		if (direction[3] == 2) { //³²
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 2) {
					maxcol = v[a].second;
					y = v[(a + 2) % 6].second;
				}
			}
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 4) {
					maxrow = v[a].second;
					x = v[(a + 4) % 6].second;
				}
			}
		}
		else { //ºÏ
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 2) {
					maxcol = v[a].second;
					y = v[(a + 4) % 6].second;
				}
			}
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 3) {
					maxrow = v[a].second;
					x = v[(a + 2) % 6].second;
				}
			}

		}
	}
	else { //¼­	
		if (direction[3] == 2) { //³²
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 1) {
					maxcol = v[a].second;
					y = v[(a + 4) % 6].second;
				}
			}
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 4) {
					maxrow = v[a].second;
					x = v[(a + 2) % 6].second;
				}
			}
			
		}
		else { //ºÏ
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 1) {
					maxcol = v[a].second;
					y = v[(a + 2) % 6].second;
				}
			}
			for (int a = 0; a < 6; a++) {
				if (v[a].first == 3) {
					maxrow = v[a].second;
					x = v[(a + 4) % 6].second;
				}
			}
		}

	}
	cout << (maxrow * maxcol - x * y) * k;
	return 0;
	}

