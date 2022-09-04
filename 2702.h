#pragma once
#include <iostream>

// 풀었으나 틀린 문제로 기록되어 있어 현재 220904에 다시품


void findprime(int a, int b) {

	int count = 0;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int add[10] = { 0 };
	int s, l;
	

	if (a >= b){ s = b, l = a; }
	else { s = a, l = b; }
	int small = s, large = l;
	int prime = 1;

	while ((l % 2 == 0) && (s % 2 == 0)) {
		l = l / 2;
		s = s / 2;
		prime = prime * 2;

		arr1[count] = 2; //l 밑에 s
		arr2[count] = 2; //공배수 저자
		count++;
		
	}

	int countsave = count;

	if (s == 1 || l == 1) {
		printf("%d %d", large, small);
		return;
	}
	large = l, small = s;
	for (int i = 3; i <= s; i = i + 2) {
		while ((l % i == 0)&&(s%i==0)) {

			if ((large % i != 0) || (small % i != 0)) {
				break;
			}
			prime = prime * i;
			large = large / i, small = small / i;
		}
	}

	for (int i = 3; i <= l; i = i + 2) {
		while (l % i == 0) {
			l = l / i;
			arr1[count] = i;
			count++;
		}
	}
	arr1[count + 1] = l;

	for (int i = 3; i <= s; i = i + 2) {
		while (s % i == 0) {
			s = s / i;
			arr2[countsave] = i;
			countsave++;
		}
	}
	arr2[countsave + 1] = s;

	int countif = 0;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < countsave; j++) {

			if (arr1[i] == arr2[j]!=0) {

				add[countif] = arr1[i];
				arr1[i] = 1;
				arr2[j] = 1;
				countif++;
				break;
			}
			
		}
		
	}
	int result = 1;


	l = 1; 
	s = 1;
	for (int i = 0; i < 10; i++) {
		if(arr1[i]!= 0) l = l * arr1[i];
		if (arr2[i] != 0) s = s * arr2[i];
		if (add[i] != 0) result = add[i]* result;
	}

	result = result * l * s;
	printf("%d %d", result, prime);

	
 
}

void run2702() {

	int T;
	scanf_s("%d", &T);
	int a, b;
	for(int i = 0; i < T ; i++){
		scanf_s("%d %d", &a, &b);
		findprime(a, b);
		printf("\n");
	}

	//최대공배수와 최대공약수를 구하는 문제, 
	//수학적으로는 소인수분해를 사용하는게 맞지만
	//a와 b는 1000 이하의 수라서 최대의 소수가 31임 반복문써도될듯


}