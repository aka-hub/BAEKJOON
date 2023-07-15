#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


void run10816() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	scanf_s("%d", &N);
	int k;
	vector<int> v(N);

	int count = 0;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &v[i]);
	}
	scanf_s("%d", &M);

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++) {
		scanf_s("%d", &k);
		count = upper_bound(v.begin(), v.end(), k) - lower_bound(v.begin(), v.end(), k);
		printf("%d ", count);
	}

}