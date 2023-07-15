#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>


using namespace std;

int run1759() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L, C;
	cin >> L >> C;
	vector<char> s;
	char a;
	for (int i = 0; i < C; i++) {
		cin >> a;
		s.push_back(a);
	}
	sort(s.begin(), s.end());
	vector<int> temp;

	for (int i = 0; i < L; i++) {
		temp.push_back(1);
	}
	for (int i = 0; i < s.size() - L; i++) {
		temp.push_back(0);
	}

	
	do {
		set<char> c;
		for(int i = 0; i < temp.size(); i++) {
			if (temp[i] == 1) {
				c.insert(s[i]);
			}
			
		}
		int count = 0;
		if (c.find('a') != c.end()) {
			count++;
		}
		if (c.find('e') != c.end()) {
			count++;
		}
		if (c.find('i') != c.end()) {
			count++;
		}
		if (c.find('o') != c.end()) {
			count++;
		}
		if (c.find('u') != c.end()) {
			count++;
		}
		
		if (count >= 1 && c.size() - count >= 2) {
			for (auto i = c.begin(); i != c.end(); i++) {
				cout << *i;
			}
		}
		else continue;

		cout << "\n";
	} while (prev_permutation(temp.begin(), temp.end()));


	return 0;

}
