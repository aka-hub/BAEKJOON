#pragma once
#include <vector>
#include <iostream>
#include <algorithm>



void run1463() {

	//그냥 전체를 계산해서 
	//그중 n번째를 리턴?하는느낌인듯
	//dp문제라는데 뭔소린지...

	int N;
	cin >> N;
	vector<int> v(N + 1, 0);
	v[1] = 0;
	v[2] = 1;
	v[3] = 1;

	for (int i = 4; i < N+1; i++) {
		v[i] = v[i - 1] + 1;
		if (i % 3 == 0) v[i] = min(v[i / 3] + 1, v[i]);
		if (i % 2 == 0) v[i] = min(v[i / 2] + 1, v[i]);	
	}
	cout << v[N];

}