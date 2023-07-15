#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

void run9375() {
	//n(0 ¡Â n ¡Â 30)
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	string str1, str2;
	cin >> t;


	for (int i = 0; i < t; i++) {
		vector<string> v;
		set<string> s;
		vector<int> cnt;
		int sum = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> str1 >> str2;
			v.push_back(str2);
			s.insert(str2);
		}
		set<string>::iterator iter;
		for (auto iter = s.begin(); iter != s.end(); iter++) {
			cnt.push_back(count(v.begin(), v.end(), *iter));
		}
		for (int m = 0; m < cnt.size(); m++) {
			sum = sum * (cnt[m] + 1);
		}
		cout << sum - 1 << "\n";

	}

}
