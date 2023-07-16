#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <deque>
#include <sstream>


using namespace std;

int run5430() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	string p, tcase;
	cin >> t;
	for (int i = 0; i < t; i++) {
		bool check = true;
		int num = 0;
		int temp;
		cin >> p >> n;
		cin >> tcase;
		deque<int> q;
		/* for (int j = 1; j <= n; j++) {
			q.push_back(tcase[j * 2-1]-48); //���� ����ֱ�

		}
		*/
		//�־����� ���� ���ڸ����ƴ�
		tcase = tcase.substr(1, tcase.length()-2);
		istringstream ss(tcase);
		string buff;
		while (getline(ss, buff, ',')) {
			temp = stoi(buff);
			q.push_back(temp);
		}




		for (int j = 0; j < p.length(); j++) {
			if (p[j] == 'R') {
				num++;
				//������
		
			}
			else if (q.size() == 0) {
				check = false;
				break;
			}
			else{ //ù��° ������ 
				if (num % 2 == 0) { //�����������ʾ�����
					q.pop_front();
				}
				else { //������������
					q.pop_back();
				}
			}

		}


		if (check == false) {
			cout << "error" << "\n";
			continue;
		}
		else if (q.size() == 0) {
			cout << "[]\n";
		}
		else if (num % 2 == 0) { //�����������ʾ�����
			cout << "[" << q.front();
			q.pop_front();
			while(q.size()>0){
				cout << "," << q.front();
				q.pop_front();
			}
			cout << "]\n";
		}
		else {
			cout << "[" << q.back();
			q.pop_back();
			while (q.size()>0) {
				cout << "," << q.back();
				q.pop_back();
			}
			cout << "]\n";

		}

	}
	return 0;
}
