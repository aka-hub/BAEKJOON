#pragma once
#include <iostream>
#include <list>
using namespace std;

void run2003() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int count = 0;
	list<int> l;
	int k;
	int sum = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {	
		cin >> k;
		l.push_back(k);
		sum += k;
		if (sum > M) {
			while (sum > M) {
				sum -= l.front();
				l.pop_front();
			}
		}
		if (sum == M) {
			count++;
			
		}
	}
	cout << count;

}