#pragma once
#include <iostream>

using namespace std;



void square3(int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int k = 1;
			if (i % 3 == 1 && j % 3 == 1) printf(" ");
			else {
				bool checked = false;
				while (k != n) {
					if ((i / k) % 3 == 1 && (j / k) % 3 == 1) {
						printf(" ");
						checked = true;
						break;

					}
					k = k * 3;
				}

				if (checked == false) printf("*");
			}

		}
		printf("\n");
	}

}


int run2447() {
	int n;
	cin >> n;
	square3(n);

	return 0;

}