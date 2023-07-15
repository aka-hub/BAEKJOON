#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <deque>
#include <cmath>

using namespace std;
//에라토스테네스의 체 쓰면 시간초과날듯 
int n2023;

void print2023(int num, int len) {
	if (n2023 == len) {
		cout << num << "\n";
	}
	else {
		for (int i = 1; i <= 9; i += 2) {
			int a = num * 10 + i;
			bool check = true;
			for (int j = 2; j * j <= a; j++) {
				if (a % j == 0) {
					check = false;
					break;
				}
			}
			if (check == true) {
				print2023(a, len + 1);
			}
		}
	}
}

int run2023() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> n2023;
	//시작 2 3 5 7
	//이후 1 3 5 7 9 
	print2023(2, 1);
	print2023(3, 1);
	print2023(5, 1);
	print2023(7, 1);

	return 0;
}