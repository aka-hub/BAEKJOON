#pragma once
#include <iostream>
#include <algorithm>
using namespace std;



int run1783() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;

	// N�� M�� 2,000,000,000���� �۰ų� ���� �ڿ����̴�.
	// ���� n ���� m
	//���ΰ� ��ĭ�̻��̸� �����ǰ����� ���� ����������
	//���ΰ� 
	if (n == 1) {
		cout << 1;
		return 0;
	}
	else if (n == 2) {
		cout << min((m+1)/2, 4);
		return 0;
	}
	else if (n >= 3) {
		if (m >= 7) {
			cout << m - 2;
			return 0;
		}
		else {
			cout << min(m, 4);
			return 0;
		}
	}

}