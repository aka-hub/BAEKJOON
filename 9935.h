#pragma once
#include <iostream>
#include <utility>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <deque>

using namespace std;

int run9935() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str1, str2;
	cin >> str1;
	cin >> str2;
	int s2 = str2.length()-1;
	deque<char> s;
	
	for (int i = 0; i < str1.length(); i++) {
		s.push_back(str1[i]);
		if (s.back() == str2[s2]) {
			bool check = true;
			if (s.size() <= s2) {
				continue;
			}
			
			for(int j = 0; j <= s2; j++){
				if (s[s.size()-j-1]  != str2[s2 - j]) {
					check = false;
					break;
				}
			}
			if (check == true) {
				for (int j = 0; j <= s2; j++) {
					s.pop_back();
				}
			}
			
		}
	}
	
	if (s.empty()) {
		cout << "FRULA";
		return 0;
	}
	else {
		while (!s.empty()) {
			cout << s.front();
			s.pop_front();
		}
		return 0;
	}

	

}