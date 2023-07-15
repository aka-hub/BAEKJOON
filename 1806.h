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
#include <numeric>

using namespace std;

int run1806() {
	int INF = 1000000000;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,s;
	cin >> n >> s;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int start = 0, end = 0;
	int sum = 0;
	// N (10 ¡Â N < 100,000) S (0 < S ¡Â 100,000,000)
	int count = INF;

	while (end != n) {
		sum += arr[end];

		if (sum >= s) {
			while (sum >= s) {
				if (count > end - start + 1) count = end - start + 1;
				sum -= arr[start];
				start++;
			}
		}
		end++;
	}

	if (count == INF) cout << "0";
	else cout << count;

	return 0;
	}