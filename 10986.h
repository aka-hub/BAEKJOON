#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>


using namespace std;

int run10986() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int temp = 0;
	long long count[1002] = { 0 , };
	long long sum = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		sum += temp;
		count[sum % m]++;
	}
	long long cnt = 0;
	for (int i = 0; i<=1000; i++){
		cnt += count[i] * (count[i] - 1) / 2; //а╤гу	
	}

	cout << count[0] + cnt;

	return 0;

}
