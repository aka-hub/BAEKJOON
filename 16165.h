#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;


int run16165() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	string name;
	vector<string> gn;
	vector<string> group[100];

	int num;
	for (int i = 0; i < n; i++) {
		cin >> name;
		gn.push_back(name);

		cin >> num;
		for (int j = 0; j < num; j++) {
			cin >> name;
			group[i].push_back(name);
		}
		sort(group[i].begin(), group[i].end());
	}

	for (int i = 0; i < m; i++) {
		cin >> name >> num;

		if (num == 0) {
			auto a = find(gn.begin(), gn.end(), name) - gn.begin();
			for (auto j = group[a].begin(); j != group[a].end(); j++) {
				cout << *j << "\n";
			}

		}
		else if (num == 1) {
			for (int j = 0; j < n; j++) {
				if (find(group[j].begin(), group[j].end(), name) != group[j].end()) {
				cout << gn[j] << "\n";
				break;
				}
			}
			
		}

	}
	return 0;

}
