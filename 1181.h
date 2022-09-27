#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return true;
	}
	else if (a.length() == b.length()) {
		if (a <= b) return true;
		else return false;
	}
	else return false;
}



void run1181() {
	//정렬 조건": 1 길이가짧은, 2 사전순, 
	int N;
	cin >> N;
	string word[20000];
	for (int i = 0; i < N; i++) {
		cin >> word[i];
		for (int j = 0; j < i; j++) {
			if (word[i] == word[j]) {
				i--;
				N--;
				break;
			}
		}
	}
	

	sort(word, word + N, compare);

	for (int i = 0; i < N; i++) {
		cout << word[i] << "\n";
	}
}