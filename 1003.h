#pragma once
#include <iostream>
#include <vector>


using namespace std;

//�ð����� 0.25�� 

//�ð����ѹ���, �Ǻ���ġ ?



void run1003() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//N�� 40���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.

	int t, n;
	vector<pair<int, int>> p;
	cin >> t;
	//���� 0 / 1

	p.push_back(make_pair(1, 0));
	p.push_back(make_pair(0, 1));

	for (int i = 2; i < 41; i++) {
		p.push_back(make_pair(p[i - 1].first+ p[i - 2].first, p[i - 1].second+ p[i - 2].second));
	}

	for (int i = 0; i < t; i++) {
		cin >> n;		
		cout << p[n].first << " " << p[n].second << "\n";
	}


}