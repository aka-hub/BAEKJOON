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
#include <numeric>

using namespace std;

int run1644() {
	int INF = 1000000000;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	vector<bool> prime(n + 1, true);
	vector<int> v;
	


	for (int i = 2; i * i <= n; i++)
	{
		for (int j = i * 2; j <= n; j += i)
			prime[j] = false;
	}

	for (int i = 2; i <= n; i++)
	{
		if (prime[i]) v.push_back(i);
	}
	int end = 0, start = 0;
	int sum = 0;
	int count = 0;
	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i];
	//}


	while (end != v.size()) {
		sum += v[end];

		if (sum > n) {
			while (sum > n) {			
				sum -= v[start];
				start++;
			}
			
		}
		if (sum == n) {
			count++;
		}
		
		end++;

		
	}



	cout << count;
	return 0;
}