#pragma once
#include <iostream>
#include <cmath>

using namespace std;

void run1004() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//-1000 ¡Â x1, y1, x2, y2, cx, cy ¡Â 1000
	//1 ¡Â r ¡Â 1000
	//1 ¡Â n ¡Â 50

	int n, t, x1, y1, x2, y2;
	int cx, cy, cr;
	cin >> t;


	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		int count = 0;
		for (int j = 0; j < n; j++) {
			cin >> cx >> cy >> cr;
			if (pow(cx - x1, 2) + pow(cy - y1, 2) < pow(cr, 2)) {
				if (pow(cx - x2, 2) + pow(cy - y2, 2) < pow(cr, 2)) {
				}
				else {
					count++;
				}
			}
			else if (pow(cx - x2, 2) + pow(cy - y2, 2) < pow(cr, 2)) {
				count++;
			}
		}
		cout << count << "\n";
		
	}

}