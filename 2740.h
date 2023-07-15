#pragma once
#include <iostream>

using namespace std;

void run2740() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, K;
	int a;
	int A[100][100] = { 0, };
	int B[100][100] = { 0, };
	int C[100][100] = { 0, };
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> B[i][j];
		}
	}
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < K; x++) {
			for (int i = 0; i < M; i++) {
				C[y][x] += A[y][i] * B[i][x];

			}
			cout << C[y][x] << " ";
		}
		cout << "\n";
	}

	

}