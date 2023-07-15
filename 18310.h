#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int run18310() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//(1¡ÂN¡Â200, 000)
	vector<int> v;
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	if (n % 2 == 1) {
		cout << v[n / 2];
	}
	else {
		cout << v[n / 2 - 1];
	}
	return 0;
}
