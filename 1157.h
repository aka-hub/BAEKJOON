#pragma once
#include <iostream>
#include <string>

using namespace std;

int run1157() {

	string word;
	int alp[26] = { 0, };
	int big = 0;
	int same = -1;
	cin >> word;

	for (int i = 0; i < word.length(); i++) {

		if (word[i] >= 65 && word[i] <= 90) {
			alp[word[i] - 65]++;
		}
		else if (word[i] >= 97 && word[i] <= 122) {
			alp[word[i] - 97]++;
		}

	}

	for (int i = 0; i < 26; i++) {
		if (alp[i] > big) {
			big = alp[i];
		}
		else if (alp[i] == big) {
			same = big;
		}
	}


	if (big == same) {
		cout << "?";
		return 0;
	}
	
	for (int i = 0; i < 26; i++) {
		if (alp[i] == big) {
			cout << char(i+65);


		}

	}




}