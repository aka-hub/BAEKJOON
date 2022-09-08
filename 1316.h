#pragma once
#include <iostream>
#include <string>
using namespace std;

void run1316() {

	int N;
	cin >> N;
	string A;
	int count = 0;



	for (int i = 0; i < N; i++) {
		cin >> A;
		int alphabet[26] = { 0, };
		int a = 1;
		for (int j = 1; j < A.length(); j++) {
			if (A[j] != A[j - 1]) {
				alphabet[A[j - 1] - 97]++;
				if (alphabet[A[j - 1] - 97] > 1) {
					a = 0;
					break;
				}
			}
		}
		if((alphabet[A[A.length()-1] - 97] == 0)&&(a==1)) {
			count++;
		}
	}

	cout << count;
}
