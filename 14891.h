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

string returnstr_L(string str) {
	string a = str.substr(0, 1);
	str = str.substr(1, 7);
	str = str + a;
	return str;
}
string returnstr_R(string str) {
	string a = str.substr(7, 1);
	str = str.substr(0, 7);
	str = a+str;
	return str;
}


int run14891() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b, c, d;
	vector<pair<int, int>> dir;
	int k, di, num;
	cin >> a >> b >> c >> d;
	cin >> k; // È¸ÀüÈ½¼ö
	for (int i = 0; i < k; i++) {
		cin >> num >> di; //Åé´Ï ¹øÈ£ , ¹æÇâ
		dir.push_back(make_pair(num, di));
	}
	

	
	return 0;
}