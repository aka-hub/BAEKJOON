#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

void run1018() {

	bool board[50][50] = { 0, };

	char c;
	int N, M;
	cin >> N >> M;
	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c;
			if (c == 'B') { // black
				board[i][j] = 1;
			}
			else board[i][j] = 0; // white

		}
	}
	int check[42][42] = { 0 };
	int small = 50;
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {

			if (board[i][j] == 0) { //white

				for (int k = 0; k < 4; k++) {
					for (int n = 0; n < 4; n++) {
						if (board[k * 2 + i][n * 2 + j] != 0) { // i+Â¦¼ö, i¿Í°°Àº
							check[i][j]++;
						}
						else if(board[k * 2 + i+1][n * 2 + j+1] != 1) { // i+È¦¼ö, i¿Í´Ù¸§
							check[i][j]++;
						}
						
					}
				}
			}
			else if (board[i][j] == 1) { //black
				for (int k = 0; k < 4; k++) {
					for (int n = 0; n < 4; n++) {
						if (board[k * 2 + i][n * 2 + j] != 1) { // i+Â¦¼ö, i¿Í°°Àº
							check[i][j]++;
						}
						else if (board[k * 2 + i + 1][n * 2 + j + 1] != 0) { // i+È¦¼ö, i¿Í´Ù¸§
							check[i][j]++;
						}

					}
				}
			}

		}
	}


}