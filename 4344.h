#pragma once
#include <iostream>
using namespace std;

void run4344() {

	int C, testcase;
	int num[1001] = { 0, };
	


	cin >> C;
	
	for (int j = 0; j < C; j++) {

		cin >> testcase;
		int total = 0;
		int count = 0;
		float average = 0;
		float percent;

		for (int i = 0; i < testcase; i++) {

			cin >> num[i];
			total = total + num[i];

		}
		
		average = total / testcase;
		for (int k = 0; k < testcase; k++) {

			if ((float)num[k] > average) {
				count++;
			}
		}
		
		percent = count / (float)testcase * 100;

		

		cout << fixed;
		cout.precision(3);
		cout << percent << "%\n";
	}
	

}