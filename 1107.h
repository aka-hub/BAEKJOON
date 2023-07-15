#pragma once
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <math.h>

using namespace std;

int run1107() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int neararr[8] = { 0, };
	int n, m;
	bool button[11] = { true, };

	cin >> n;
	cin >> m;
	int channel = n;
	int x;

	for (int i = 0; i < m; i++) {
		cin >> x;
		button[x] = false;
	}


	if (n == 0) {
		for (int j = 0; j <= 9; j++) {
			if (button[j] == true) {
				cout << j + 1;
				return 0;
			}
		}
	}
	int savenum = 0;
	while (n != 0) {
		neararr[savenum] = n % 10;

		n = n / 10;
		savenum++;

	}
	//거꾸로 들어감 5457->7545

	int count = savenum;
	int small = 10, big = 0;
	vector<int> v;
	int k = 0;
	savenum--;

	for (int num_ = savenum; num_ >= 0; num_--) {
		if (button[neararr[num_]] == true) {
			v.push_back(neararr[num_]);
		}
		else {
			break;
		}
		if (num_ == 0) {
			for (auto q = v.begin(); q != v.end(); q++) {
				cout << "0";
				return 0;
			}
		}
	}



	for (int i = 0; i <= 9; i++) {
		if (button[i] == true) {
			if (small > i) {
				small = i;
			}
			if (big < i) {
				big = i;
			}
		}
	}

	vector<int> v1;
	vector<int> v2;

	for (int i = 1; i <= 5; i++) {
		int bt_a = -1, bt_b = -1;
		if (button[(neararr[k] + i + 10) % 10] == true) { //큰수
			bt_a = (neararr[k] + i + 10) % 10;
		}
		if (button[(neararr[k] - i + 10) % 10] == true) { //작은수
			bt_b = (neararr[k] - i + 10) % 10;
		}

		if (bt_a != -1 || bt_b != -1) {

			for (auto q = v.begin(); q != v.end(); q++) {
				v1.push_back(*q);
				v2.push_back(*q);
			}
			v1.push_back(bt_a);//큰수
			v2.push_back(bt_b);//작은수

			while (count != 0) {
				v1.push_back(small);
				v2.push_back(big);
				count--;
			}
			break;
		}
	}
	savenum = 0;
	int num1 = 0, num2 = 0;
	for (auto q = v1.begin(); q != v1.end(); q++) {
		if (*q == -1) {
			num1 = 100002;
			break;
		}
		num1 = num1 + *q * pow(10, savenum);
	}
	savenum = 0;
	for (auto q = v2.begin(); q != v2.end(); q++) {
		if (*q == -1) {
			num2 = 100002;
			break;
		}
		num2 = num2 + *q * pow(10, savenum);
	}

	int smallnum;
	abs(num1 - channel) < abs(num2 - channel) ? smallnum = abs(num1 - channel) : smallnum = abs(num2 - channel);
	cout << "\n" << num1 << "\n" << num2 << "\n";
	cout << smallnum << "\n" << abs(channel - 100);

	for (auto q = v.begin(); q != v.end(); q++) {
		cout << *q;
	}

	return 0;



}

