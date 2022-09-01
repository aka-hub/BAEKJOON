#pragma once
#include <iostream>
#include <string>
using namespace std;

void run2675() {

	int T, R;
	string word;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R;
		cin >> word;
		for (int j = 0; j < word.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << word[j];

			}
		}
		cout << "\n";
	}


}