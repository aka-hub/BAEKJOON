#pragma once
#include <iostream>
#include <vector>


using namespace std;

//시간제한 0.25초 

//시간제한문제, 피보나치 ?



void run1003() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//N은 40보다 작거나 같은 자연수 또는 0이다.

	int t, n;
	vector<pair<int, int>> p;
	cin >> t;
	//순서 0 / 1

	p.push_back(make_pair(1, 0));
	p.push_back(make_pair(0, 1));

	for (int i = 2; i < 41; i++) {
		p.push_back(make_pair(p[i - 1].first+ p[i - 2].first, p[i - 1].second+ p[i - 2].second));
	}

	for (int i = 0; i < t; i++) {
		cin >> n;		
		cout << p[n].first << " " << p[n].second << "\n";
	}


}