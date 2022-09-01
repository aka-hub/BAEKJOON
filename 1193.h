#pragma once
#include <iostream>
#include <string>

using namespace std;

void run1193() {

	int X, num, a, b, count = 0, sum = 0;

	cin >> X;
	num = X;
	
	while (num > 0) {
		count++;
		num = num - count;
		sum += count;
		
	}
	sum -= count; //지금까지 거쳐온 단계의 수

	if(count % 2 == 0){ // 짝수
		a = X - sum;
		b = count - (X - sum) + 1;
	
		cout << a << "/" << b;
	}

	else if (count % 2 == 1) { //홀수
		a = count - (X - sum) + 1;
		b = X - sum;
		cout << a << "/" << b;
	}

	return;

}




