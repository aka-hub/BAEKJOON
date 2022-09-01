#pragma once
#include <iostream>
using namespace std;

void run14681() {

	int x, y;

	cin >> x >> y;

	if (x > 0) {
		if (y > 0) cout << 1;
		else cout << 4;
	}
	else {
		if (y > 0) cout << 2;
		else cout << 3;
	}
}