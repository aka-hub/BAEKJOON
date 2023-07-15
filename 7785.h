#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <deque>

using namespace std;

int run7785() {
	int n;
	string name, enter;
	set<string> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> enter;
		if (s.insert(name).second == false) {
			s.erase(s.find(name));
		}
		else {
			if (enter != "leave") {
				s.insert(name);
			}
		}
	}

	for (auto i = s.rbegin(); i != s.rend(); i++) {
		cout << *i << "\n";
	}
	return 0;
}