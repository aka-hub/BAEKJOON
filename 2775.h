#pragma once
#include <iostream>
#include <string>

using namespace std;



void run2775() {

	int T = 1;

	cin >> T;
	
	int home[15][15] = { 0, };
	for (int i = 1; i < 15; i++) {
		home[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			for (int k = 1; k <= j; k++) {
				home[i][j] += home[i - 1][k];
			}
		}
	}

	int k, n;
	for (int i = 0; i < T; i++) {

		cin >> k >> n;
		cout << home[k][n]<<"\n";

	}



}