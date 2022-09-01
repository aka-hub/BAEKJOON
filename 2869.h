#pragma once
#include <iostream>

using namespace std;

void run2869() {
	int A, B, V, count;
	cin >> A >> B >> V;

	if ((V - A) % (A - B) == 0) count = (V - A) / (A - B);
	else count = (V - A) / (A - B) + 1;

	cout << count+1;

}