#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct studentlist{
	string name;
int korean, english, math;


};
vector<studentlist> v;
bool comparestudent(studentlist &a, studentlist &b) {
	if (a.korean == b.korean) {
		if (a.english == b.english) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			else return a.math > b.math;
		}
		else return a.english < b.english;
	}
	else return a.korean > b.korean;
}

void run10825() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int k, e, m;
	string n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		studentlist st;
		cin >> st.name >> st.korean >> st.english >> st.math;
		v.push_back(st);
	}
	sort(v.begin(), v.end(), comparestudent);

	for (int i = 0; i < N; i++) {
		cout << v[i].name << "\n";
	}
}