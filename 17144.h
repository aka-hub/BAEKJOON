#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>


using namespace std;

int run17144() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[52][52] = { 0, };

	int r, c, t;
	cin >> r >> c >> t;
	for (int i = 0; i <= r+1; i++) {
		arr[i][0] = -2;
		arr[i][c + 1] = -2;
	}
	for (int i = 0; i <= c + 1; i++) {
		arr[0][i] = -2;
		arr[r+1][i] = -2;
	}



	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> arr[i][j];

		}
	}

	vector<int> aero;

	for (int i = 1; i <= r; i++) {
		if (arr[i][1] == -1) {
			aero.push_back(i);
		}
	}
	int arr2[52][52] = { 0, };

	int dir[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} };

	while (t != 0) {

		

		//미세먼지 확산

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				int cnt = 0; // 방향 갯수
				if (arr[i][j] <= 0) continue;
				int value = arr[i][j] / 5;
					for (int k = 0; k < 4; k++) { //방향

						if (arr[i + dir[k][0]][j + dir[k][1]] >= 0) {
							arr2[i + dir[k][0]][j + dir[k][1]] += value; //계산
							cnt++;
						}

					}
					arr2[i][j] -= value * cnt ;
				
			}
		}

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				arr[i][j] += arr2[i][j]; //미세먼지 총합
				arr2[i][j] = 0;
			}
		}

		//공기청정기 작동 

		//0-1) 왼쪽위
		for (int i = aero[0]-1; i >0; i--) {
			arr[i][1] = arr[i - 1][1];
		}
		//0-2) 왼쪽밑
		for (int i =aero[1]+1; i < r; i++) {
			arr[i][1] = arr[i + 1][1];
		}

		// 1) 밑, 위

		for (int i = 2; i <= c; i++) {
			arr[1][i - 1] = arr[1][i];
			arr[r][i - 1] = arr[r][i];
		}

		//2-1) 오른쪽위
		for (int i = 1; i < aero[0]; i++) {
			arr[i][c] = arr[i+1][c];
		}

		//2-2 오른쪽밑 
		for (int i = r; i > aero[1]; i--) {
			arr[i][c] = arr[i-1][c];
		}
		//3 중간

		for (int i = c; i > 2; i--) {
			arr[aero[0]][i] = arr[aero[0]][i-1];
			arr[aero[1]][i] = arr[aero[1]][i-1];
		}

		arr[aero[0]][2] = 0;
		arr[aero[1]][2] = 0;


		t--;
	}

	int sum = 0;

	cout << sum + 2;
	return 0;
}
