#pragma once
#include <iostream>

// Ǯ������ Ʋ�� ������ ��ϵǾ� �־� ���� 220904�� �ٽ�ǰ


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

		arr1[count] = 2; //l �ؿ� s
		arr2[count] = 2; //����� ����
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

	//�ִ������� �ִ������� ���ϴ� ����, 
	//���������δ� ���μ����ظ� ����ϴ°� ������
	//a�� b�� 1000 ������ ���� �ִ��� �Ҽ��� 31�� �ݺ����ᵵ�ɵ�


}