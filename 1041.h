#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;


int run1041() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	long long total = 0;
	cin >> n;
	vector<long long> v(6);
	for (int i = 0; i < 6; i++) {
		cin >> v[i];
	}
	//a0 b1 c2 d3 e4 f5 
	//af  cd   be   ->   05   23   14

	if (n == 1) {
		sort(v.begin(), v.end());
		for (int i = 0; i < 5; i++) {
			total += v[i];
		}
		cout << total;
		return 0;
	}
	//���� �ϳ����̴°� �ּڰ�

	long long side1 = 51;
	for (int i = 0; i < 6; i++) {
		if (side1 > v[i]) side1 = v[i];
	}
	total= total+ side1 * (n - 2) * (5 * n - 6);

	//���� �ΰ����̴°� ���ӵ� ���� ���� ������ ���� 05 23 14�� �ƴ�
	long long side2 = 102;
	for (int i = 0; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == j) continue;
			if (i + j == 5) continue;
			if (side2 > v[i] + v[j]) side2 = v[i] + v[j];
		}
	}
	total = total + side2 * 4 * (2 * n - 3);
	//���� �������̴°� �پ��ִ�-ť�걸���� �� �𼭸���- �ּ��հ�
	long long side3 = 153;
	for (int i = 0; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			if (i == j) continue;
			if (i + j == 5) continue;
			for (int k = 2; k < 6; k++) {
				if (i == k) continue;
				if (j == k) continue;
				if (k + j == 5) continue;
				if (i + k == 5) continue;
				if (side3 > v[i] + v[j] + v[k]) side3 = v[i] + v[j] + v[k];
			}
		}
	}
	total = total + side3 * 4;
	cout << total;
	return 0;
}

