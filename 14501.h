#pragma once
#include <iostream>

using namespace std;



void run14501() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// N (1 ≤ N ≤ 15)
	//(1 ≤ Ti ≤ 5, 1 ≤ Pi ≤ 1,000)
	//최대 수익
	int N;
	cin >> N;
	int arr[2][15] = { 0, };
	int sum[21]= { 0, };

	for (int i = 0; i < N; i++) {
		cin >> arr[0][i] >> arr[1][i];
		if (arr[0][i] > N - i) arr[1][i] = 0;
	}
	


	for (int i = N-1; i >= 0; i--){
		sum[i] = max(sum[i + 1], sum[i + arr[0][i]] + arr[1][i]);
	}
	cout << sum[0];
}