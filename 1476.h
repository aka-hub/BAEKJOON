#pragma once
#include <iostream>

using namespace std;

int checkyear(int a, int b, int c) {
	int y =  1;
	while (true) {
		if (((y - a) % 15==0)&&((y - b) % 28 == 0)&&((y - c) % 19 == 0)) {
			return y;
			break;
		}

		y++;
	}
}



void run1476(){

	int E, S, M;

	cin >> E >> S >> M;
	// (1 �� E �� 15, 1 �� S �� 28, 1 �� M �� 19)
	cout << checkyear(E, S, M);




}