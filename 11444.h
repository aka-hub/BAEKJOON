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
long long mod11444 = 1000000007;

typedef vector<vector<long long>> matrix11444;

matrix11444 operator * (matrix11444 &a, matrix11444 &b) {
	matrix11444 ans(2, vector<long long>(2));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				ans[i][j] += a[i][k] * b[k][j];
			}
			ans[i][j] %= mod11444;
		}
	}
	return ans;
}

int run11444() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	matrix11444 ans = { {1,0 }, {0, 1}};
	matrix11444 a = { {1,1},{1,0} };
	long long n;
	cin >> n;
	while (n > 0) {
		if (n % 2 == 1) {
			ans = ans * a;
		}
		a = a * a;
		n /= 2;
		
	}
	cout << ans[0][1];


	return 0;

}