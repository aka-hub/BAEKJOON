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
	//�׸��� ��° �ٺ��� N+1��° �ٱ��� N���� ���� �־�����.
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	//�׸��� N+2��° �ٺ��� N+M+K+1��° �ٱ��� 
	//�� ���� ���� a, b, c�� �־����µ�, 
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