#pragma once
#include <iostream>

using namespace std;

int fac(int a) {
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum *= i;
	}
	return sum;
}

int count9095(int n) {
	int arr[3] = { 0, };
	int count = 0;
	int k;
	for (int i = 0; i <= n / 3; i++) {
		k = n - i * 3;
		arr[2] = i;
		for (int j = 0; j <= k / 2; j++) {
			arr[1] = j;
			arr[0] = k - j * 2;
			count = count + fac(arr[0] + arr[1] + arr[2]) / fac(arr[0]) /fac(arr[1]) /fac(arr[2]);
		}
	}
	return count;
}

void run9095() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//123������ ��Ÿ���� ����� ��
	//n�� ��� 11���� �۴�

	//���չ��� �ƴѰ�?? 
	//n = a+2b+3c�϶� a, b, c����� ���� ���϶�
	//a, b, c�� ������ ������� 
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << count9095(n) << "\n";
	}
	

}