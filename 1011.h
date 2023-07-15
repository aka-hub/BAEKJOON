#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

void run1011() {
	//(0 ¡Â x < y < 2^31)
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int x, y;
	int len;
	int sq;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		len = y - x;
		sq = sqrt(len);
		if (pow(sq, 2) == len) {
			cout << sq * 2 - 1 << "\n";
			continue;
		}
		else {
			len = len - pow(sq, 2);
			if (len <= sq) {
				cout << sq * 2 << "\n";
			}
			else {
				cout << sq * 2 + 1 << "\n";
			}
		}
		
	}
	
}
