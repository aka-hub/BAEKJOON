#pragma once
#include <iostream>
#include <deque>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;


int run2346() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<pair<int, int>> d;
	bool visited[1002] = { false, };
	int count = 0;
	int pre = 0;
	int k;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		d.push_back(make_pair(i, k));
	}
	bool checked = true;
	
	while (!d.empty()) {
		cout << d[0].first+1 << " ";
		int num = d[0].second;
		d.pop_front();
		if (d.empty()) return 0;
		if (num < 0) {
			for (int i = 0; i < abs(num); i++) {
				d.push_front(d.back());
				d.pop_back();
				
			}
				
		}
		else {
			for (int i = 0; i < abs(num)-1; i++) {
				d.push_back(d.front());
				d.pop_front();			
			}
		}
	}

	return 0;

}