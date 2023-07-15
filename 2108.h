#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

void run2108() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	double sum = 0;
	
	vector<int> v;
	set<int> con;
	set<int> s;
	cin >> N;
	int k;
	int arr[8001] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> k;
		sum += k;
		v.push_back(k);
		s.insert(k);
		arr[k + 4000]++;
	}
	int bignum=0;

	for (int i = 0; i < 8001; i++) {
		if (arr[i] > bignum) bignum = arr[i];
	}
	int count = 0;
	int countarr[2] = { 0, };
	sort(v.begin(), v.end());

	if (round(sum / N) != 0) {
		cout << round(sum / N) << "\n";
	}
	else cout << 0 << "\n";

	cout << v[N / 2] << "\n";

	for (int i = 0; i <= 8000; i++) {
		if (arr[i] == bignum) {
			countarr[count] = i;
			count++;
		}
		if (count == 2) {
			break;
		}
	}
	if (count == 2) {
		cout << countarr[1] - 4000 << "\n";
	}
	else if (count == 1) cout << countarr[0] - 4000 << "\n";

	cout << v[N - 1] - v[0];
}