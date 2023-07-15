#pragma once
#include <iostream>

using namespace std;

int N;

void space(int n) {
	if (n ==1) return;
	printf("____");
	n--;
	space(n);
}

void talkbot1(int n) {
	if (n > N) return;
	space(n);
	printf("\"재귀함수가 뭔가요?\"\n");
	space(n);
	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
	space(n);
	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
	space(n);
	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	n++;
	talkbot1(n);
}

void talkbot2(int n) {
	if (n == 0) return;
	space(n+1);
	printf("라고 답변하였지.\n");
	n--;
	talkbot2(n);
}

void run17478() {
	cin >> N;
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	talkbot1(1);
	space(N+1);
	printf("\"재귀함수가 뭔가요?\"\n");
	space(N + 1);
	printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
	talkbot2(N);
	printf("라고 답변하였지.\n");

}