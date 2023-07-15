#pragma once
#include <iostream>

using namespace std;

void run2579() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// 0 < stair <= 300
	// 0 < score <= 10000
	int stair[301] = { 0, };
	int st;
	cin >> st;
	for (int i = 1; i <= st; i++) {
		cin >> stair[i];
	}


	int score[301] = { 0, };

	score[1] = stair[1];
	score[2] = stair[1] + stair[2];	

	for (int i = 3; i <= st; i++) {
		score[i] = max(score[i - 3] + stair[i - 1], score[i - 2]) + stair[i];
	}

	cout << score[st];
}
