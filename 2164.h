#pragma once
#include <iostream>
#include <queue>

using namespace std;

void run2164() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//N(1 �� N �� 500,000)
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size()>1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();
	//Ȧ¦ ����,���� Ȧ��.¦���� �����ؾ��� 
	//�� ����Ǫ�÷� �ذ�ȵǳ� ť��
	//ť�εɵ�??

}