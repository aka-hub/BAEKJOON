#pragma once
#include <iostream>
using namespace std;

void run2839() {

	int N;
	int num1, num2;
	int count = 0;

	cin >> N;

	if (N % 5 == 0) {
		count = N / 5;
		N = 0;

	}
	while ((N > 5 && N % 5 != 0)||N==3) {

		N = N - 3;
		count++;
		/*
		1. n�� 5�� �������� �� �������� 0�� �ְ� 
			���ƾ��� ����
		2. n�� 5���� ���� ���� ����
		3.n�� 3�� �ƴ� �ְ� ����
		*/

	}
	if (N % 5 == 0) {
		count += N / 5;
		
	}
	else if (N != 0) {
		count = -1;
	}


	cout << count;
}	