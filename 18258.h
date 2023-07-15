#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

void run18258() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string ord;
	int N, x;
	int count = 0;
	list<int> l;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ord;
		if (ord[0] == 'p') {
			if (ord[1] == 'u') {
				cin >> x;
				l.push_back(x);
				count++;
			}
			else {
				if (count == 0) {
					cout << "-1\n";
					continue;
				}
				cout << l.front() << "\n";
				l.pop_front();
				count--;
			}
		}
		else if (ord[0] == 's') {
			cout << l.size() << "\n";
		}
		else if (ord[0] == 'e') {
			if (count == 0) {
				cout << "1\n";
				continue;
			}
			cout << "0\n";

		}
		else if (ord[0] == 'f') {
			if (count == 0) {
				cout << "-1\n";
				continue;
			}
			cout << l.front() << "\n";
		}
		else {
			if (count == 0) {
				cout << "-1\n";
				continue;
			}
			cout << l.back() << "\n";
		}
	}


}