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
	printf("\"����Լ��� ������?\"\n");
	space(n);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	space(n);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	space(n);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	n++;
	talkbot1(n);
}

void talkbot2(int n) {
	if (n == 0) return;
	space(n+1);
	printf("��� �亯�Ͽ���.\n");
	n--;
	talkbot2(n);
}

void run17478() {
	cin >> N;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	talkbot1(1);
	space(N+1);
	printf("\"����Լ��� ������?\"\n");
	space(N + 1);
	printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	talkbot2(N);
	printf("��� �亯�Ͽ���.\n");

}