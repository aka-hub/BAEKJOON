#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comparereverse(int a, int b) {
	return a > b;
}

void run10610() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	cin >> N;
	vector<int> v;

	int sum = 0;
	int zerocount = 0;
	for (int i = 0; i < N.length(); i++) {
		v.push_back(N[i]-48);
		sum += (N[i] - 48);
		if (N[i] - 48 == 0) zerocount++;
	}
	if (sum % 3 != 0) {
		cout << "-1";
		return;
	}
	if (zerocount == 0) {
		cout << "-1";
		return;
	}
	sort(v.begin(), v.end(), comparereverse);
	for (int i = 0; i < N.length(); i++) {
		cout << v[i];
	}


}