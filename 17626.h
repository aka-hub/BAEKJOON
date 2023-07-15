#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>


using namespace std;





void run17626() {
	//1 ≤ n ≤ 50,000
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[50001] = { 0, };

	int n;
	cin >> n;
	/*
	for (int i = 1; i <= n; i++) {
		int a = sqrt(i);
		if (pow(a, 2) == i) { // 제곱수일때
			arr[i] = 1;
		}
		else if (arr[i - 1] == 1) {
			arr[i] = 2;
		}
		else {
			for (int j = 2; j < i; j++) {
				if (arr[j] == 1) {//제곱수일 경우
					int b = sqrt(n - j);
					if (n - j == pow(b, 2)) {
						arr[i] = 2;
						break;
					}
				}
				else if(arr[j] == 2){
					int c = sqrt(n - j);
					if (n - j == pow(c, 2)) {
						arr[i] = 3;
					}
				}

			}
			if (arr[i] == 0) arr[i] = 4;
		}
	}
	*/
	//시간 초과 뜰 거 같아서 다시 짜보기로 함
	for (int i = 1; i <= 50000; i++) {
		int a = sqrt(i);
		if (pow(a, 2) == i) { // 제곱수일때
			arr[i] = 1;
		}
		else {
			for (int j = 1; j * j <= i; j++) {
				if (arr[j * j] + arr[i - j * j] == 2) {
					arr[i] = 2;
					break;
				}
				else if (arr[j * j] + arr[i - j * j] == 3) {
					arr[i] = 3;
				}	

				
			}
			if (arr[i] == 0) arr[i] = 4;
		}
	}
	

	

	cout << arr[n];

	
}