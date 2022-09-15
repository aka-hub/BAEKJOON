#pragma once
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


void run9012() {
	string VPS;
	int N;
	cin >> N;


	for (int a = 0; a < N; a++) {
		int open = 0;

		cin >> VPS;
		for (int i = 0; i < VPS.length(); i++) {
			if (VPS[i] == '(') {
				open++;
			}
			else if (VPS[i] == ')') {
				open--;
			}

			if (open < 0) {
				cout << "NO\n";
				break;
			}
		}
		if (open == 0) cout << "YES\n";
		else if(open > 0) cout << "NO\n";

	}

}