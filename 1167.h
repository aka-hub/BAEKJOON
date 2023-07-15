#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;

vector<pair<int, int>> tree1167[100001];
bool v1167[100001] = { false, };


int maxlen, maxnode;

void dfs1167(int node, int sum) {
	if (v1167[node] == true) {
		return;
	}
	v1167[node] = true;
	if (maxlen < sum) {
		maxlen = sum;
		maxnode = node;
	}
	
	for (auto i = 0; i < tree1167[node].size(); i++) {
		int nextn = tree1167[node][i].first;
		int nextl = tree1167[node][i].second;
		dfs1167(nextn, nextl + sum);
	}
	return;
}



int run1167() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int v;
	cin >> v;
	int a, b, len;

	for (int i = 0; i < v; i++) {
		cin >> a;
		while (true) {
			cin >> b;
			if (b == -1) break;
			cin >> len;
			tree1167[a].push_back(make_pair(b, len));

		}

	}

	dfs1167(1, 0);

	memset(v1167, false, sizeof(v1167));
	maxlen = 0;
	dfs1167(maxnode, 0);
	cout << maxlen;
	return 0;
}