#pragma once
#include <iostream>
#include <string>
using namespace std;


void run1427() {

	string N;
	char temp;

	cin >> N;

	for (int i = 0; i < N.length(); i++) {
		for(int j = 0; j < N.length() - 1; j++){
			if ((int)N[j]<int(N[j + 1])) {

				temp = N[j];
				N[j] = N[j + 1];
				N[j + 1] = temp;
			}
		}
		

	}

	cout << N;

}