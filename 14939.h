#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int switch14939(vector<vector<bool>> arr, int a, int b) {
	!arr[a][b];

	bool visited[11][11] = {false,};

	

}

int run14939() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<bool>>arr(10, vector<bool>(10, false));
	string str;
	for (int i = 0; i < 10; i++) {
		cin >> str;
		for (int j = 0; j < 10; j++) {
			if (str[j] == 'O') arr[i][j] = true;
		}
	}
