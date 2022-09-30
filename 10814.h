#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#define _CRT_SECURE_NO_WARNINGS
#pragma warnings(disable: 4996)

using namespace std;

class member {
	
public:
	int age = 0;
	char name[101] = { 0, };
	int order= 0;
	member() {};
	member(int a, char b[101], int c) {
		age = a;
		strcpy_s(name, b);
		order = c;
	};

};

bool comp2(member& a, member& b) {
	if (a.age < b.age) {
		return true;
	}
	else if (a.age == b.age) {
		if (a.order < b.order) {
			return true;
		}
		else return false;
	}
	else return false;
};


void run10814() {
	int N;
	cin >> N;

	char name[101] = { 0, };
	int age;
	int order = 1;
	vector<member> m;

	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		m.push_back(member(age, name, order));
		order++;
	}

	sort(m.begin(), m.end(), comp2);

	for (int i = 0; i < N; i++) {
		cout << m[i].age << " " << m[i].name << "\n";
	}

}