#pragma once
#include <iostream>
#include <string>
using namespace std;



int checkc(char b) {
	if (b == '=') return 1;
	else if (b == '-') return 1; // ...이거 -를=으로 오타내서틀림 맘이안조흠
	else return 0;
};
int checkd1(char a) {
	if (a == '-') return 1;
	else return 0;
}
int checkd2(char a, char b) {
	if (a == 'z' && b == '=') return 2;
	else return 0;
}

int check_ln(char a) {
	if (a == 'j') return 1;
	else return 0;
}
int check_sz(char a) {
	if (a == '=') return 1;
	else return 0;
}

void run2941() {

	int count = 0;
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (i == word.length() - 1) {
			count++;
			break;
		}

		if (word[i] == 'c') {
			if (checkc(word[i + 1]) == 1) {
				count++;
				i++;
				continue;
			}
		}
		if (word[i] == 'd') {
			
			if (checkd1(word[i + 1]) == 1) {
				count++;
				i++;
				continue;
			}
			if (word[i + 1] == word.length()) {
				count++;
				continue;
			}
			else if (checkd2(word[i + 1], word[i + 2]) == 2) {
				count++;
				i += 2;
				continue;

			}
		}
		if ((word[i] == 'l')||(word[i] == 'n')) {
			if (check_ln(word[i + 1]) == 1) {
				count++;
				i++;
				continue;
			}
		}
		if ((word[i] == 's')||(word[i] == 'z')) {
			if (check_sz(word[i + 1]) == 1) {
				count++;
				i++;
				continue;
			}
		}
		count++;
	}

	cout << count;
}