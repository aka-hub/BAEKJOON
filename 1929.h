#pragma once
#include <iostream>
#include <vector>

using namespace std;
/* 시간초과,,
void run1929() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	// (1 ≤ M ≤ N ≤ 1,000,000) 
	cin >> m >> n;
	int count = 4;
	vector<int> prime;

	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);
	prime.push_back(7);
	int j;
	for (int i = 0; i < count; i++) {
		if (prime[i] < m) continue;
		cout << prime[i] << "\n";
	}

	for (int i = 11; i <= n; i+=2) {

		
		for (j = 0; j < count; j++) {
			if (i % prime[j] == 0) {
				j++;
				break;
			}
		}
		if (j==count) {
			prime.push_back(i);
			count++;
			if (prime[count-1]>=m) {
				cout << prime[count-1] << "\n";
			}
		}

	}
	
}


*/

void run1929() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	// (1 ≤ M ≤ N ≤ 1,000,000) 
	cin >> m >> n; 
	
	vector<int> v(n + 1,0);
	v[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j * i <= n; j++) {
			v[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (v[i] != 1) {
			cout << i << "\n";
		}
	}

}