#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class point2 {
public:
	int x;
	int y;

	point2() {};
	point2(int a, int b) {
		x = a;
		y = b;
	}
};

bool comp3(point2& a, point2& b) {
	if (a.y < b.y) {
		return true;
	}
	else if (a.y == b.y) {
		if (a.x < b.x) {
			return true;
		}
		else return false;
	}
	else return false;
}

void run11651() {
	int N;
	cin >> N; 
	int x, y;
	vector<point2> p;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		p.push_back(point2(x, y));
	}
	sort(p.begin(), p.end(), comp3);

	for (int i = 0; i < N; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}
}