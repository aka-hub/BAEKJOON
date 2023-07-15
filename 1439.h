#pragma once
#include <iostream>

#include <string>

using namespace std;

void run1439() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string h;
	int swit;
	cin >> h;
	int check[2] = { 0, };
	if (h[0] == '0') swit = 0;
	else swit = 1;
	check[swit]++;
	for (int i = 1; i < h.length(); i++) {
		if (h[i]-48 != swit) {
			if (swit == 0) swit = 1;
			else swit = 0;
			check[swit]++;
		}
	}
	
	int a = check[1] > check[0] ? check[0] : check[1];
	cout << a;
}