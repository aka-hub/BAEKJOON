#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <deque>
#include <cmath>
#include <climits>

using namespace std;

int sum2042(int start, int end, int b, int c) {
	if(start == end) return 

}


int run2042() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	vector<long long> num(n);
	cin >> n >> m >> k;
	//그리고 둘째 줄부터 N+1번째 줄까지 N개의 수가 주어진다.
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	//그리고 N+2번째 줄부터 N+M+K+1번째 줄까지 
	//세 개의 정수 a, b, c가 주어지는데, 
	long long a, b, c;
	for (int i = 0; i < m + k; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			num[b - 1] = c;
		}
		else if (a == 2) {
			int sum = 0;
			for(int )


		}


	}