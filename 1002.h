#pragma once
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void run1002() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	double x1, x2, y1, y2, r1, r2;
	double d;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if ((x1 == x2) && (y1 == y2)) { // 동심원일경우
			if (r1 == r2) {
				cout << -1 << "\n";
				continue;
			}
			else {
				cout << 0 << "\n";
				continue;
			}

		}

		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // 거리

		if (r1 + r2 == d) {
			cout << "1\n";
			continue;
		}
		else if (max(r1, r2) - min(r1, r2) == d) {
			cout << "1\n";
			continue;
		}
		else if (r1 + r2 <= d) {
			cout << "0\n";
			continue;
		}
		else if (max(r1, r2) - min(r1, r2) > d) {
			cout << "0\n";
			continue;
		}

		cout << "2\n";


	}

}