#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Josephus{
public:
	int n = 0;
	Josephus() {};
	Josephus(int a) {
		n = a;
	}


};

void run11866() {
	int N, K; // (1 ¡Â K ¡Â N ¡Â 1,000)
	int arr[1001] = { 0, };
	int count = 0;
	int last = 0;

	int i = 0;
	cin >> N >> K;
	vector<Josephus> jo;

	while (count < N) {

		int checked = 0;

			while(true){
				if (last + i == N) {
					i = 0;
					last = 0;
				}
				if (arr[last + i] == 0) {
					checked++;
			
				}
				else if (arr[last + i] == 2) {

					i++;
					continue;
				}


				if (checked == K) {
					arr[last + i] = 2;
					jo.push_back(Josephus(last + i + 1));
					last = i + last+1;
					i = 0;
					break;
				}
				i++;

			}
			count++;
		}
	cout << "<";
	for (int i = 0; i < N-1; i++) cout << jo[i].n << ", ";
	cout << jo[N-1].n << ">";
	}

