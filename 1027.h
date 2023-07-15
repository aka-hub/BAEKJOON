#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;

int run1027() {

	int n;
	cin >> n;

	vector<double> h(n+2,0);

	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}

	vector<int> cnt(n+2, 0);
	
/*
	for (int i = 1; i <= n; i++) {
		double right = h[i + 1] - h[i];
		double left = h[i - 1] - h[i];

		if (i!=1){ // 맨왼쪽 아닐시 
			cnt[i]++;

			for (int j = 1; j < i; j++) {
				double gr = (h[i - j] - h[i]) / j;
				if (gr < left) {
					cnt[i]++;
					left = gr;
				}
			}



		}		
		if (i != n) { // 맨오른쪽 아닐시
			cnt[i]++;

			for (int j = 1; j < n - i; j++) {
				double gr = (h[i + j] - h[i]) / j;
				if (gr > right) {
					cnt[i]++;
					right = gr;
				}
			}

		}		
	}
*/

	for (int i = 1; i <= n; i++) { //보이는 건물
		double maxgr = -10000000000;
		for (int j = i + 1; j <= n; j++) {
			double g = (h[j] - h[i]) / (j - i);
			if (g > maxgr) {
				maxgr = g;
				cnt[i]++;
				cnt[j]++;
			}
		}
	}
	int big = 0;
	for (int i = 1; i <= n; i++) {
		if (big < cnt[i]) big = cnt[i];
	}

	cout << big;

	return 0;
}