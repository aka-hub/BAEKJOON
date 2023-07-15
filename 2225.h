#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>
using namespace std;

int cnt2225 = 0;
int n2225;
void dp2225(int num, int count, int sum) {
	if (count == 0) {
		if (sum == n2225) {
			cnt2225++;
		}
		return;
	}
	count--;
	if()

}





int run2225() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

