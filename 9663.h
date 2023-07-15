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
vector<int> v9663;
int count9663 = 0;
int n9663;

bool queen9663(int a) {
	for (int i = 0; i < v9663.size(); i++) {
		if (v9663[i] == a) return false;
		if (abs(v9663[i] - a) == v9663.size()-i) return false;
	}
	return true;
}

void nqueen(int idx) {
	if (idx == n9663) {
		count9663++;
		return;
	}
	for (int i = 0; i < n9663; i++) {
		if (queen9663(i) == true) {
			v9663.push_back(i);
			nqueen(idx + 1);

			v9663.pop_back();
		}
	}
	return;
}

int run9663() {

	cin >> n9663;
	nqueen(0);
	cout << count9663;
	return 0;
}