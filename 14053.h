#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

int run14053(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//(3 �� N, M �� 50)
	int arr[53][53] = { 0, }; 
	bool visited[53][53] = { false, };
	queue<pair<int, int>> q;

	int n, m;
	cin >> n >> m;
	int r, c, d; //0 �� 1 �� 2 �� 3 ��
	cin >> r >> c >> d;

	int k;
	int dir[4][2] = { { -1,0 },{0,1},{1,0},{0,-1} }; // �� �� �� �� ��
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> k;
			arr[i][j] = k; // ��ĭ�� 0, ���� 1
		}

	}

	q.push(make_pair(r, c)); //ť�� ����ġ ����
	visited[r][c] = true;
	int count = 0;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		//���� �ٶ󺸴� ������ d�϶�, ���� �ٶ󺸱�
		d = (d + 3) % 4;

		if (visited[x + dir[d][0]][y + dir[d][1]]
			== false && arr[x + dir[d][0]][y + dir[d][1]] == 0) {
			visited[x + dir[d][0]][y + dir[d][1]] = true;
			q.push(make_pair(x + dir[d][0], y + dir[d][1]));
			count = 0;
		}
		else if (count == 3) {

			if (arr[x - dir[d][0]][y - dir[d][1]] == 1) {
				break;
			}
			else {
				q.push(make_pair(x - dir[d][0], y - dir[d][1]));
				count = 0;
			}
		}
		else{
			count++;
			continue;
		}
		

		q.pop();

	}
	count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == true) {
				count++;
			}
		}
	}

	cout << count;
	return 0;
}