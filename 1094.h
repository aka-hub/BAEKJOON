#pragma once
#include <iostream>
using namespace std;

void run1094() {

	int X;
	int sti = 64;
	int total = 0;
	int count = 0;
	cin >> X;


	while (X != 0) {
		while (X < sti) {
			
			sti = sti / 2;
		}
		count++;
		total = total + sti;
		X = X - sti;
		}

	cout << count++;


}