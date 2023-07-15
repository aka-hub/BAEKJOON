#pragma once
#include <iostream>
#include <string>
#include <set>

using namespace std;

void run1764() {
	set<string>::iterator iter;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	string a;
	cin >> N >> M;
	set<string> s;
	set<string> d;
	for (int i = 0; i < N; i++) {
		cin >> a;
		s.insert(a);
	}
	for (int i = 0; i < M; i++) {
		cin >> a;
		if (s.insert(a).second == 0) {
			d.insert(a);
		}
	}
	cout << d.size() << "\n";
	for (iter = d.begin(); iter != d.end(); iter++) {
		cout << *iter << "\n";
	}
}