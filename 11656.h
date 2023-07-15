#pragma once
#include <iostream>
#include <string>
#include <set>

using namespace std;

void run11656() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	set<string> se;
	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		se.insert(S.substr(i));
	}

	set<string>::iterator iter;
	for (iter = se.begin(); iter != se.end(); iter++) {
		cout << *iter << "\n";
	}
	
}