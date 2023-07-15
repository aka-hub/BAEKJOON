#pragma once
#include <iostream>
#include <queue>

using namespace std;

void run1158() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";
	for(int i = 0; i < N-1; i++){
		for (int i = 0; i < K-1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">"
		;
}