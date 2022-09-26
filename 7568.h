#pragma once
#include <iostream>
using namespace std;

void run7568() {

	int N;
	cin >> N;
	int arr[3][50] = { 0, }; //0 = x, 1 = y
	
	for (int i = 0; i < N; i++) {
		cin >> arr[0][i] >> arr[1][i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			(arr[0][i] < arr[0][j]) ? ((arr[1][i] < arr[1][j]) ? arr[2][i]++ : 0) : 0;
		}
	}
	
	for (int i = 0; i < N; i++) {
		cout << arr[2][i] + 1 << " ";
	}
	

}