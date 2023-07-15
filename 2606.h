#pragma once
#include <iostream>
#include <vector>
#include <stack>


using namespace std;

/*
void run2606() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int count = 0;
	set<int> arr[101];
	int k;
	// n <= 100
	int n, t;
	int a, b;
	cin >> n >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		arr[i].insert(a);
		arr[i].insert(b);

	}

	for (int k = 0; k < t; k++) {
		for (int i = 0; i < t; i++) {
			set<int>::iterator iter;
			for(iter = arr[i].begin(); iter!=arr[i].end(); iter++){
				if (iter!=arr[i].end()){
					for (iter = arr[i].begin(); iter != arr[i].end(); iter++) {
						arr[k].insert(*iter);
						
					}
					arr[i].clear();
					break;
				}
			}

		}
	}
	for (int i = 0; i < t; i++) {
		if(arr[i].find(1) != arr[i].end()) {
			cout << arr[i].size();
			
		}

}

*/

//dfs bfs문제라고 함
//그러면 원형연결리스트를 만들어야하는건가??


void run2606() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> s;
	vector<int> v[101];

	bool visited[101] = { false,};
	
	int arr[101] = { 0, };
	int n, m;
	int a, b;
	cin >> n >> m;


	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);

	}

	s.push(1);
	visited[1] = true;

	int count = 0;

	if (v[1].size() == 0) {
		cout << "0";
	}
	else {
		while (!s.empty()) {
			int cur = s.top();
			bool connect = false;
			for (auto i = v[cur].begin(); i != v[cur].end(); i++) {
				if (visited[*i] == false) {
					connect = true;

					s.push(*i);
					visited[*i] = true;
					break;
				}
			}
			if (connect == false) {
				s.pop();
			}

		}
		for(int i = 0; i < 101; i++){
			if (visited[i] == true){
				count++;
			}
		}
		cout << count-1;
	}

}