#pragma once
#include <iostream>


void run11653() {

	int save;
	scanf_s("%d", &save);


	//메모리 제한 	256 MB 시간 1초
	// 1<= N <= 10^7
	// 대충 삼천*삼천 쯤 되는데 이럴경우 소수를 하나하나 써서 하는게 빠르기야 하겠지만
	// 아무래도 코더 관점 비효율적임(물론 시간초과뜨면 걍갖다넣을거임)
	// 이럴 경우 N을 입력받은 거에서 가장 큰 소수를 찾고 그 아래의 소수를 나눠보는 게 어떤가 
	// 근데 루트N으로하는게 더맞긴함;;;
	// 그냥
	// 이게더 어려울 것 같긴 함;; 모르겠다 일단 쉬운방법으로 우선해봄


	
	while (save % 2 == 0) {
		save = save / 2;
		printf("2\n");
	}
	while (save % 3 == 0) {
		save = save / 3;
		printf("3\n");
	}
	while (save % 5 == 0) {
		save = save / 5;
		printf("5\n");
	}
	while (save % 7 == 0) {
		save = save / 7;
		printf("7\n");
	}


	for (int i = 11; (i*i <= save); i=i+2) {

		while (save % i == 0) {
			printf("%d\n", i);
			save = save / i;
		}
	}

	if (save != 1) {
		printf("%d\n", save);
	}

}