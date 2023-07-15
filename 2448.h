#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

bool arr2448[3080][6200] = { false, };

int make2448(int a, int b) {
	arr2448[a][b] = true;
	arr2448[a + 1][b+1] = true;
	arr2448[a + 1][b - 1] = true;
	for (int i = -2; i < 3; i++) {
		arr2448[a + 2][b + i] = true;
	}
	return b - 3;
}


void run2448() {
	
	int n;
	cin >> n;
	set<int> cnt_s;
	int count;
	make2448(0, n - 1);
	cnt_s.insert(n - 4);
	cnt_s.insert(n + 2);
	
	for (int i = 3; i < n; i+=3) {
		vector<int> cv;
		for (auto j = cnt_s.begin(); j != cnt_s.end(); j++) {
			int x = make2448(i, *j);
			cv.push_back(x);
			cv.push_back(x + 6);
		}
		cnt_s.clear();
		for (auto j = cv.begin(); j < cv.end(); j++) {
			if (cnt_s.insert(*j).second == false) {
				cnt_s.erase(*j);
			}
			else {
				cnt_s.insert(*j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2 - 1; j++) {
			if (arr2448[i][j] == true) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


}