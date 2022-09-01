#pragma once
#include <iostream>
using namespace std;

int number[10000] = { 0, };

void self_num() {

	for (int i = 1; i <= 10000; i++) {
		if (i >= 1 && i < 10) {
			number[i + i % 10] = 1;
		}
		if (i >= 10 && i < 100) {
			number[i + i/10 + i % 10] = 1;
		}
		if (i >= 100 && i < 1000) {
			number[i + i / 100 + (i%100) / 10 + i % 10] = 1;
		}
		if (i >= 1000 && i < 10000) {
			number[i + i / 1000 + (i%1000) / 100 + ((i%1000)%100) / 10 + i % 10] = 1;
		}
	}

	for (int i = 1; i <= 10000; i++) {

		if (number[i] == 0) {

			cout << i << "\n";
		}
	}


}



void run4673() {

	self_num();

}

