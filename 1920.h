#pragma once
#include <set>
using namespace std;

void run1920() {


	int num;
	int N, M;
	set<int> s;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num);
		s.insert(num);
	}
	scanf_s("%d", &M);
	for (int j = 0; j < M; j++) {
		scanf_s("%d", &num);
		if (s.find(num) != s.end()) printf("1\n");
		else printf("0\n");
	}

	
	




}