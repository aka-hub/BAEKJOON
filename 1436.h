#pragma once
#include <iostream>
#include <string>

using namespace std;

void run1436() {

	//N<=10000
	//N��° ��ȭ ����
	//������ ����= 6�� ��� 3���̻� �������� ���� ����
	int N;
	cin >> N;
	int num = 666;
	int count = 1;

		while(count < N){
			num++;
			if (to_string(num).find("666") != string::npos) { ///666�� ������
				count++;
				
			}
		}
cout << num;

}