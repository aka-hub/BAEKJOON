#pragma once
#include <iostream>
#include <set>
#include <stack>
#include <vector>

using namespace std;


int fac(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
		
	}
	return sum;
}

void run15649() {
	//1초
	// (1 ≤ M ≤ N ≤ 8)
	// 8개중에 8개를 골라서 출력하는 최대의 경우일 때
	// 8! = 40320개, 시간상 어지간해선 ㄱㅊ
	//8^8 = 16,777,216
	// 사전순 증가 출력
	int n, m;
	stack<int> s;
	vector<int> v[9];
	

	cin >> n >> m;

	for (int i = 1; i <= n; i++
		
	}
	







	
}