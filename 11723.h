#pragma once
#include <iostream>

using namespace std;


void run11723() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[21] = { 0, };
	int M;
	int x;
	char order[8] = { 0, };
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> order;

		if(order[0]=='a'){
			if (order[1] == 'd') {
				cin >> x;
				arr[x] = 1;
			}
			else if (order[1] == 'l') {
				for (int j = 1; j < 21; j++) {
					arr[j] = 1;
				}
			}
		}
		else if (order[0] == 'r') {
			cin >> x;
			arr[x] = 0;

		}
		else if (order[0] == 'c') {
			cin >> x;
			cout << arr[x] << "\n";
		}
		else if (order[0] == 't') {
			cin >> x;
			arr[x] == 1 ? arr[x] = 0 : arr[x] = 1;
		}
		else if (order[0] == 'e') {
			for (int j = 1; j < 21; j++) {
				arr[j] = 0;
			}
		}

	}

}