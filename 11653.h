#pragma once
#include <iostream>


void run11653() {

	int save;
	scanf_s("%d", &save);


	//�޸� ���� 	256 MB �ð� 1��
	// 1<= N <= 10^7
	// ���� ��õ*��õ �� �Ǵµ� �̷���� �Ҽ��� �ϳ��ϳ� �Ἥ �ϴ°� ������� �ϰ�����
	// �ƹ����� �ڴ� ���� ��ȿ������(���� �ð��ʰ��߸� �����ٳ�������)
	// �̷� ��� N�� �Է¹��� �ſ��� ���� ū �Ҽ��� ã�� �� �Ʒ��� �Ҽ��� �������� �� ��� 
	// �ٵ� ��ƮN�����ϴ°� ���±���;;;
	// �׳�
	// �̰Դ� ����� �� ���� ��;; �𸣰ڴ� �ϴ� ���������� �켱�غ�


	
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