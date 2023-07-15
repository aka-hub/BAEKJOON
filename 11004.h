#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void run11004() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	int A;
	vector<int> v;


	for (int i = 0; i < N; i++) {
		cin >> A;
		v.push_back(A);
	}
	
	sort(v.begin(), v.end());
	cout << v[K-1];
	
	
}