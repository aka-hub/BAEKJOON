#pragma once
#include <iostream>
using namespace std;

void run2609() {

	int A, B, C;
	int result;

		cin >> A >> B;
		int a = A;
		int b = B;
		if (A > B) {
			while (b != 0) {
				C = a % b;
				a = b;
				b = C;
			}
			result = (A / a) * (B / a) * a;
			cout << a << "\n" << result << "\n";
		}
		else if (A < B) {
			while (a != 0) {
				C = b % a;
				b = a;
				a = C;
			}
			result = (A / b) * (B / b) * b;
			cout << b << "\n" << result << "\n";
		}
		else {
			cout << A << "\n" << A << "\n";
		}

}