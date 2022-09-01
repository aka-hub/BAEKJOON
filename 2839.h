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
		1. n이 5로 나누었을 때 나머지가 0인 애가 
			남아야함 ㅇㅇ
		2. n이 5보다 작은 놈이 남음
		3.n이 3이 아닌 애가 남음
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