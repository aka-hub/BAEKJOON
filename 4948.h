#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void run4948() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;

	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);

	vector<int>::iterator low, up;

	for (int i = 11; i <= 246912; i += 2) {
		bool check = true;
		
		for (int j = 1; j < v.size(); j++) {
			if (v[j]*v[j] > i) break;
			if (i % v[j] == 0) {
				check = false;
				break;
			}
			
		}
		if (check == true) v.push_back(i);
	}
	// 1<= n <= 123456



	int n;
	while (true) {
		int count = 0;
		cin >> n;
		if (n == 0) return;
		up = upper_bound(v.begin(), v.end(), 2 * n);
		low = upper_bound(v.begin(), v.end(), n);
		cout << up - low << "\n";

	}
	
}