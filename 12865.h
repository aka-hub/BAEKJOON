#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;
const int Weight = 100005;
int bag[105][Weight] = { 0, };

int run12865() {
	// N(1 ¡Â N ¡Â 100)
	// K(1 ¡Â K ¡Â 100,000)
	// W(1 ¡Â W ¡Â 100,000)
	// V(0 ¡Â V ¡Â 1,000)

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	vector<int> we;
	vector<int> va;
	int w, v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w >> v;
		we.push_back(w);
		va.push_back(v);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {

			if (j>=we[i-1]) {
				int tmp = va[i-1]+ bag[i - 1][j - we[i-1]];
				bag[i][j] = max(tmp, bag[i - 1][j]);
				
			}
			else {
				bag[i][j] = bag[i - 1][j];
			}

		}
		

	}

	cout << bag[n][k];
	return 0;
}

	