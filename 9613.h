#pragma once
#include <iostream>
#include <vector>
using namespace std;

int checkprime(int a, int b) {
	int c;
	if (a < b) {
		c = b;
		b = a;
		a = c;
	}
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;

}




void run9613() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long sum = 0;
		cin >> n;
		if (n == 1) {
			cin >> sum;
			cout << sum;
			continue;
		}
		vector<int> v(n);
		for (int j = 0; j < n; j++) {
			cin >> v[j];
		}
		for (int a = 1; a < n; a++) {
			for (int b = 0; b < a; b++) {
				sum+=checkprime(v[a], v[b]);
			}
		}
		cout << sum << "\n";
	}
}