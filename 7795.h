#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int run7795() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	int m, n;
	int k;
	// (1 ¡Â N, M ¡Â 20,000) 
	for (int i = 0; i < T; i++) {
		vector<int> a;
		vector<int> b;
		int count = 0;
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> k;
			a.push_back(k);
		}
		for (int j = 0; j < m; j++) {
			cin >> k;
			b.push_back(k);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int li = 0;
		for (int j = 0; j < n; j++) {
			if (li == m) {
				count += li;
				continue;
			}
			while (a[j]>b[li]) {				
				li++;
				if (li == m)  break;
			}
			count += li;
		}
		cout << count<<"\n";
	}

	return 0;
}