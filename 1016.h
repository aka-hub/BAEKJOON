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

using namespace std;

int run1016() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//1 ¡Â min ¡Â 1,000,000,000,000
	//min ¡Â max ¡Â min + 1, 000, 000
	long long n, m;
	cin >> n >> m;
	long long a = sqrt(m);
	vector<bool> b(1000001, false);

	long long j;

	long long count = m - n + 1;
	
	long long prime = 2;

	while (prime <= a) {
		long long k = n / (prime * prime);
		if (k * prime * prime == n) {
		}
		else k += 1;

		while (k * prime * prime <= m) {
			if (b[k * prime * prime - n] == false) {
				b[k * prime * prime - n] = true;
				count--;
			}
			k++;
		}
		prime++;


	}


	cout << count;
	return 0;
	//???
}