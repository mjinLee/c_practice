#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condition(void) {
	
	//����-�л�/�Ϲ������� ����(�Ϲ���:20��)
	/*
	int age = 15;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�\n");
	else
		printf("�л� �Դϴ�\n");

	//�ʵ��л�(8-13)/���л�(14-16)/�����л�(17-19) ����ī��
	int age = 8;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л� �Դϴ�\n");
	}
	else if (age >= 14 && age <= 16)
		printf("���л� �Դϴ�\n");
	else if (age >= 17 && age <= 19)
		printf("�����л� �Դϴ�\n");
	else
		printf("�л��� �ƴѰ�����\n");

	//break / continue
	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ������ǥ
	for (int i = 1; i <= 30; i++) {
		if (i >= 6){
			printf("������ �л��� ���� ������\n");
			break;
		}
		
		printf("%d �� �л��� ������ǥ�غ� �ϼ���\n",i);
	}

	//1������ 30������ �ִ� �ݿ��� 7�� �Ἦ
	//6������ 10������ ������ǥ�ض� 
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d �� �л��� �Ἦ�Դϴ�\n", i);
				continue; //�ٷ� i++�� ��
			}
			printf("%d �� �л��� ������ǥ�غ��ϼ���\n", i);
		}
	} 

	//&&(and) ||(or)
	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d) {
		printf("a �� b, Ȥ�� c �� d �� ���� �����ϴ�\n");
	}
	else
		printf("���� ���� �ٸ��׿�\n");

	//���� ���� ��
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 ��ȯ
	if (i == 0)
		printf("����\n");
	else if (i == 1)
		printf("����\n");
	else if (i == 2)
		printf("��\n");
	else
		printf("�����\n");

	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 ��ȯ
	switch (i) {
	case 0: printf("����\n"); break; //i==0�̸� switch�� Ż��
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("����� \n"); break;
	}

	//���߰��� ����ī�� if�� -> switch case ������ �ٲٱ�
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л� �Դϴ�\n"); break;
	case 14:
	case 15:
	case 16: printf("���л� �Դϴ�\n"); break;
	case 17:
	case 18:
	case 19: printf("�����л� �Դϴ�\n"); break;
	default: printf("�Ϲ��� �Դϴ�\n"); break;
	}  */

	//Up and Down ������Ʈ
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; //����
	int chance = 5; //��ȸ
	while (1) { // 1 ��, 0 ����
		printf("���� ��ȸ %d ��\n", chance--); //chance�� �ϳ��� �پ��
		printf("���ڸ� ���������� (1-100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�! \n\n");
			break; //�����̸� ��ȸ�� �� �� ���ҵ��� whileŻ��
		}
		else
			printf("�� �� ���� ������ �߻��߾�� \n\n");
		
		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�\n");
			break;
		}
	}


	return 0;
}