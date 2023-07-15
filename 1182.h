#pragma once
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
int arr1182[21] = { 0, };
int N1182, S1182;
int count1182 = 0;
void dfs1182(int idx, int cnt, int sum) {
	if (cnt > 0 && sum == S1182) {
		count1182++;
	}
	if (idx == N1182) return;

	for (int i = idx + 1; i <= N1182; i++) {
		dfs1182(i, cnt + 1, sum + arr1182[i]);

	}
}

int run1182() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int temp;
	cin >> N1182 >> S1182;
	for (int i = 1; i <= N1182; i++) {
		cin >> arr1182[i];
	}
	dfs1182(0, 0, 0);

	cout << count1182;
	return 0;
}