#pragma once
#include <iostream>
#include <string>

using namespace std;

void run1436() {

	//N<=10000
	//N번째 영화 제목
	//종말의 숫자= 6이 적어도 3개이상 연속으로 들어가는 숫자
	int N;
	cin >> N;
	int num = 666;
	int count = 1;

		while(count < N){
			num++;
			if (to_string(num).find("666") != string::npos) { ///666이 있으면
				count++;
				
			}
		}
cout << num;

}