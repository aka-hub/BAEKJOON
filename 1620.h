#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

/*
void run1620() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string ord;
	int N, M;
	cin >> N >> M;
	vector<string> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> ord;
		if (ord[0] > 48 && ord[0] < 58) { // 숫자일경우
			cout << v[stoi(ord) - 1] << "\n";
		}
		else {
			vector<string>::iterator iter = find(v.begin(), v.end(), ord);
			cout << iter - v.begin() + 1 << "\n";
		}
	}
}


*/
/*
class pockemon {
public:
	int num = 0;
	char name[21] = { 0, };
	pockemon() {};
	pockemon(char _name[21], int _num) {
		strcpy(name, _name);
		num = _num;
	}
};

bool comparepockemon(pockemon &a, pockemon &b){
	if (strcmp(a.name, b.name)) return true;
	else return false;

}
*/

void run1620() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	string name;

	map<string, int> pocketmon;
	vector<string> v;
	cin >> N >> M;
		
	for (int i = 0; i < N; i++) {
		cin >> name;
		pocketmon.insert({name, i+1});
		v.push_back(name);
	}

	for (int i = 0; i < M; i++) {
		cin >> name;
		if (name[0] > 48 && name[0] < 58) {
			cout << v[stoi(name)-1] << "\n";
		}
		else {
			cout << pocketmon.find(name)->second << "\n";
		}
	}
}