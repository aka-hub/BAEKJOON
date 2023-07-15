#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;



int run14425() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int count = 0;
	string str;
	cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (s.find(str)!=s.end()) {
			count++;
		}
	}
	cout << count;

	return 0;
}
		
