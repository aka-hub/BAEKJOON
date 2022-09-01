#pragma once
#include <iostream>
#include <string>

using namespace std;

void run1924() {

	int x, y, day = 0;

	cin >> x >> y;

	for (int i = 1; i < x; i++) {


		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			day = day + 31;
		}
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			day = day + 30;
		}
		if (i == 2) {
			day = day + 28;
		}
	}
	day = day + y;
	if (day % 7 == 1) cout << "MON";
	if (day % 7 == 2) cout << "TUE";
	if (day % 7 == 3) cout << "WED";
	if (day % 7 == 4) cout << "THU";
	if (day % 7 == 5) cout << "FRI";
	if (day % 7 == 6) cout << "SAT";
	if (day % 7 == 0) cout << "SUN";


}