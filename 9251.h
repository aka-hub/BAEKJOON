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
int arr9251[1003][1003] = { 0, };
int run9251() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int anscount = 0;
	string A, B;
	int count = 0;
	cin >> A >> B;

	for (int i = 1; i <= A.length(); i++) {
		for (int j = 1; j <= B.length(); j++) {
			if (A[i-1] == B[j-1]) {
				arr9251[i][j] = arr9251[i - 1][j - 1] + 1;
				if (arr9251[i][j] > count) count = arr9251[i][j];
			}
			else {
				arr9251[i][j] = max(arr9251[i - 1][j], arr9251[i][j - 1]);
			}
		}
	}

	cout << count;
	return 0;
}