#pragma once
#include <iostream>
#include <set>

using namespace std;



void run10815() {
	int N, M;
	int n, m;

	set<int> numc;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &n);
		numc.insert(n);
	}
;

	scanf_s("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf_s("%d", &m);
		if (numc.find(m) == numc.end()) {
			cout << "0 ";
		}
		else cout << "1 ";
	}
}