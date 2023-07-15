#pragma once
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int board[50][50] = { 0, }; //B´Â0 W´Â1
int checkboard[50][50] = { 0, };

void boardcheck(int N, int M, int a) { 
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i % 2 == 1-a) {
				if (j % 2 == 1-a) {
					if (board[i][j] == 0) checkboard[i][j] = 2;
				}
				else
					if (board[i][j] == 1) checkboard[i][j] = 2;
			}
			else {
				if (j % 2 == 1-a) {
					if (board[i][j] == 1) checkboard[i][j] = 2;
				}
				else {
					if (board[i][j] == 0) checkboard[i][j] = 2;
				}
			}
		}
	}
	
	

}




void run1018() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int small = 2500;
	cin >> N >> M;
	string arr;
	for (int i = 0; i < N; i++) {
		cin >> arr;
		for(int j = 0; j < M; j++) {
			arr[j] == 'B' ? board[i][j] = 0 : board[i][j] = 1;
		}
	}

	boardcheck(N, M, 0);
	int count1[50][50] = { 0, };
	int count2[50][50] = { 0, };

	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M - 7; j++) {
			for (int a = 0; a < 8; a++) {
				for (int b = 0; b < 8; b++) {
					if (checkboard[a + i][b + j] == 2) {
						count1[i][j]++;

					}
					else { count2[i][j]++; }
				}
			}
			if (count1[i][j] < small) {
				if (count2[i][j] < count1[i][j]) small = count2[i][j];
				else small = count1[i][j];
			}
			else if (count2[i][j] < small) small = count2[i][j];
		}
	}

	cout << small;
}