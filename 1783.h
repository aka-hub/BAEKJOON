#pragma once
#include <iostream>
#include <algorithm>
using namespace std;



int run1783() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;

	// N과 M은 2,000,000,000보다 작거나 같은 자연수이다.
	// 세로 n 가로 m
	//세로가 세칸이상이면 가로의개수에 따라 값이정해짐
	//세로가 
	if (n == 1) {
		cout << 1;
		return 0;
	}
	else if (n == 2) {
		cout << min((m+1)/2, 4);
		return 0;
	}
	else if (n >= 3) {
		if (m >= 7) {
			cout << m - 2;
			return 0;
		}
		else {
			cout << min(m, 4);
			return 0;
		}
	}

}