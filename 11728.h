#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void run11728() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v;
	int a;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int j = 0; j < M; j++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < M + N; i++) {
		cout << v[i] << " ";
	}
}