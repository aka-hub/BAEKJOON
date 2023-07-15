#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <set>
using namespace std;


int run9996() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string str;
	cin >> n;
	cin >> str;
	string start;
	string end;
	int i;
	for (i = 0; i < str.length(); i++) {
		if (str[i] == '*') {
			break;
		}
	}
	start = str.substr(0, i);
	end = str.substr(i + 1);
	for (int i = 0; i < n; i++) {
		cin >> str;
		if(str.length()<start.length()+end.length())  cout << "NE\n";
		else if (start.compare(0, start.length(), str, 0, start.length()) == 0) {
			if (end.compare(0, end.length(), str, str.length() - end.length(), end.length()) == 0) {
				cout << "DA\n";
			}
			else cout << "NE\n";
		}
		else cout << "NE\n";
	}
	return 0;
}