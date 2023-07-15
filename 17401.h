#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

int arr17401[101][101][101] = { 0, };
using namespace std;
int t17401, n17401, d17401;
long long pow17401(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a;
	}

	long long tmp = pow17401(a, b / 2);

	if (b % 2 == 0) {
		return tmp * tmp;
	}
	else {
		return a * tmp * tmp;
	}
}

long long road17401(int time, int a, int sum) {
	if (time == d17401) return sum;

	for(int i = 1; i <= n17401; i++){
		if (arr17401[time % t17401 + 1] > 0) {

		}


}



int run17401() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, a, b, c;
	


	cin >> t17401 >> n17401 >> d17401;
	cin >> m;
	for (int i = 1; i <= t17401; i++) {
		cin >> a >> b >> c;
		arr17401[i][a][b] = c;
	}


	 