#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
int n, m;
int dir[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} };
int savearr[3][2] = { 0, };
int bignum = 0;
//벡터 배열 복사연산자
int virus14502(queue<pair<int, int> > virus, vector<vector<int> > arr, int savearr[3][2]) {
	bool visited[10][10] = { false, };
	arr[savearr[0][0]][savearr[0][1]] = 1;
	arr[savearr[1][0]][savearr[1][1]] = 1;
	arr[savearr[2][0]][savearr[2][1]] = 1;

	int count = 0;
	while (!virus.empty()) {
		int x = virus.front().first;
		int y = virus.front().second;
		
		for (int i = 0; i < 4; i++) {
			if (visited[x + dir[i][0]][y + dir[i][1]] == false
				&&arr[x+dir[i][0]][y+dir[i][1]]==0) {
				arr[x + dir[i][0]][y + dir[i][1]] = 2;
				visited[x + dir[i][0]][y + dir[i][1]] = true;
				virus.push(make_pair(x + dir[i][0], y + dir[i][1]));

			}
		}
		virus.pop();
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 0) count++;
		}
	}
	return count;

}


int run14502() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//, 0은 빈 칸, 1은 벽, 2는 바이러스
	//(3 ≤ N, M ≤ 8)
	//2 초



	queue<pair<int, int>> virus;
	vector<pair<int, int>> cube;

	cin >> n >> m;
	vector< vector<int>> arr(10, vector<int>(10, -2));

	int k;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> k;
			arr[i][j] = k;
			if (arr[i][j] == 2) virus.push(make_pair(i, j));
			else if (arr[i][j] == 0) cube.push_back(make_pair(i, j));
		}
	}

	vector<int> tempvec;

	for (int i = 1; i <= cube.size() - 3; i++) {
		tempvec.push_back(0);
	}
	for (int i = 1; i <= 3; i++) {
		tempvec.push_back(1);
	}

	do {	
		int count = 0;

		for (int i = 0; i < tempvec.size(); i++) {
			if (tempvec[i] == 1) {
				int x = cube[i].first;
				int y = cube[i].second;
				savearr[count][0] = x;
				savearr[count][1] = y;
				count++;
				if (count == 3) break;
			}
		}
		int vcount = virus14502(virus, arr, savearr);
		if (bignum < vcount) {
			bignum = vcount;
		}
	} while (next_permutation(tempvec.begin(), tempvec.end()));

	cout << bignum;
	return 0;
}

