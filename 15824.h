#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>


using namespace std;
//거듭제곱 최적화 함수
long long juhunpow(long long a, long long b) {
	if (b == 0) {
		return 1;
}
	if (b == 1) {
		return a;
	}

	long long tmp = juhunpow(a, b / 2);

	if (b % 2 == 0) {
		return tmp * tmp % 1000000007;
	}
	else {
		return a * tmp * tmp % 1000000007;
	}
}

int run15824() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 집합
	int n;
	cin >> n;

	vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	long long tmp;
	long long sum = 0;
	for (auto i = 0; i < n; i++) {
		tmp = v[i]*(juhunpow(2, i) - juhunpow(2, n - i - 1));
		sum = (sum+tmp+ 1000000007) % 1000000007;

	}
	cout << sum;
	return 0;
}