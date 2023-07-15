#pragma once
#include <iostream>
#include <string.h>

struct stack1 {
	int arr[10000] = { 0, };
	int last = 0;

	void push(int a) {
		arr[last] = a;
		last++;
	}
	void pop() {
		if (last == 0) {
			printf("-1\n");
			return;
		}
		printf("%d\n", arr[last-1]);
		last--;

	}
	void size() {
		printf("%d\n", last);
	}

	void empty() {
		if (last == 0) printf("1\n");
		else printf("0\n");

	}
	void top() {
		if (last == 0) {
			printf("-1\n");
			return;
		}
		printf("%d\n", arr[last-1]);
	}
};


void run10828() {

	//push pop 구현
	//문제에 나와있지 않은 명령이 주어지는 경우는 없다.
	//push X - pop - size - empty - top
	struct stack1 s;

	char str[6];

	int N;
	scanf_s("%d", &N);
	int pw;

	for (int i = 0; i < N; i++) {
		scanf_s("%s", str, 6);

		if (str[0] == 'p') {
			if (str[1] == 'o') { //pop
				s.pop();
				continue;
			}
			else { //push
				scanf_s("%d", &pw);
				s.push(pw);
				continue;
			}
		}
		if (str[0] == 's') { // size
			s.size();
			continue;
		}
		if(str[0] == 'e'){ //empty
			s.empty();
			continue;
		}
		if (str[0] == 't') {//top
			s.top();
			continue;
		}

	}

}