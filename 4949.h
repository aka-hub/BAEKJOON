#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;



void run4949() {
	
	vector<int> v;
	string ord;
	while (true) {
		int b = 0;
		int s = 0;
		
		bool last = 0;

		getline(cin, ord);
		if (ord[0] == '.' && ord.size() == 1) break;

		for (int i = 0; i < ord.size(); i++) {
			if (ord[i] == '(') {
				s++; 
				v.push_back(0);
			}
			else if (ord[i] == '[') {
				b++; 
				v.push_back(1);
			}
			else if (ord[i] == ')') {
				s--; 
				if (s < 0) {
					cout << "no\n";
					break;
				}
				if (v.back() != 0) break;
				v.pop_back();
			}
			else if (ord[i] == ']') {
				b--;
				if (b < 0) {
					cout << "no\n";
					break;
				}
				if (v.back() != 1) break;
				v.pop_back();
			}
			else continue;

		
		}
		v.clear();
		if (b == 0 && s == 0) cout << "yes\n";
		else if (b < 0 || s < 0) continue;
		else cout << "no\n";
	}




}