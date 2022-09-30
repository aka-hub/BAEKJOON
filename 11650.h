#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class point {
public:
	int x;
	int y;
	
	point() {};
	point(int a, int b) {
		x = a;
		y = b;
	}
};

bool comp(point& a, point& b) {
	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		if (a.y < b.y) {
			return true;
		}
		else return false;
	}
	else return false;
}


void run11650() {
	int N;
	cin >> N;
	vector<point> p;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		p.push_back(point(x, y));
	}
	sort(p.begin(), p.end(), comp);
	
	for (int i = 0; i < N; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}

}