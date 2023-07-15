#pragma once
#include <iostream>

using namespace std;

int run2525() {
	int x;
	int n;
	int a, b;
	cin >> x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		x = x - a * b;

	}
	if (x == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;

}