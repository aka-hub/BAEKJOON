#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;


int run19941() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v;
	int N;
	int K;
	string a;
	cin >> N >> K;
	cin >> a;
	for (int i = 0; i < N; i++) {
		if (a[i] == 'H') { //ÇÜ¹ö°Å
			v.push_back(0);
		}
		else if(a[i] == 'P') { // ÀÎ°£
			v.push_back(1);
		}
	}
	int count = 0;

	for (int i = 0; i < N; i++) {
		if (v[i] == 1) {
			auto iter = find(v.begin() + max(i - K, 0), v.begin() + min(i + K , N-1)+1, 0);
			if (iter != v.begin() + min(i + K, N-1)+1) {
				v[iter - v.begin()] = 2;
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
	
