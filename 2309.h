#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//2초 128mb

void run2309(){

	int h[9] = { 0, };
	int add = 0;
	int a, b;
	for (int i = 0; i < 9; i++) {
		cin >> h[i];
		add += h[i];
	}

	//9개중 2개를 뺐을때 정답이 존재한다는 거임

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) continue;
			if (add - h[i] - h[j] == 100) {
				h[i] = 0;
				h[j] = 0;
				goto exit;
			}
		}
	}
exit:

	sort(h, h + 9);

		for (int i = 2; i < 9; i++) {
			cout << h[i] << "\n";
		}
}	