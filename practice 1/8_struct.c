#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	//����ü ���� ����ü
	struct GameInfo* friendGame; //���� ��ü ����
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	//����ü ���� ����ü
	struct GameInformation* friendGame; //���� ��ü ����
} GAME_INFO;

int main_struct(void) {
	//����ü
	/*
	char* name = "�츮����";
	int year = 2017;
	int price = 50;
	char* company = "�츮ȸ��";

	char* name2 = "���ǰ���";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "����ȸ��"; */

	//����ü ���
	struct GameInfo gameinfo1;
	gameinfo1.name = "�츮����";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "�츮ȸ��";

	//����ü ���
	printf("--- ���� ��� ���� ---\n");
	printf("  ���Ӹ�    : %s\n", gameinfo1.name);
	printf("  �߸ų⵵  : %d\n", gameinfo1.year);
	printf("  ����      : %d\n", gameinfo1.price);
	printf("  ���ۻ�    : %s\n", gameinfo1.company);

	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameinfo2 = { "���ǰ���",2017,100,"����ȸ��" };
	printf("\n\n--- �Ǵٸ� ���� ��� ���� ---\n");
	printf("  ���Ӹ�    : %s\n", gameinfo2.name);
	printf("  �߸ų⵵  : %d\n", gameinfo2.year);
	printf("  ����      : %d\n", gameinfo2.price);
	printf("  ���ۻ�    : %s\n", gameinfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
		{ "�츮����",2017,50,"�츮ȸ��" },
		{ "���ǰ���",2017,100,"����ȸ��" }
	};

	//����ü ������
	struct GameInfo* gamePtr; //�̼Ǹ�
	gamePtr = &gameinfo1;
	/*printf("\n\n--- �̼Ǹ��� ���� ��� ���� ---\n");
	printf("  ���Ӹ�    : %s\n", (*gamePtr).name);
	printf("  �߸ų⵵  : %d\n", (*gamePtr).year);
	printf("  ����      : %d\n", (*gamePtr).price);
	printf("  ���ۻ�    : %s\n", (*gamePtr).company); */
	printf("\n\n--- �̼Ǹ��� ���� ��� ���� ---\n");
	printf("  ���Ӹ�    : %s\n", gamePtr->name);
	printf("  �߸ų⵵  : %d\n", gamePtr->year);
	printf("  ����      : %d\n", gamePtr->price);
	printf("  ���ۻ�    : %s\n", gamePtr->company);

	//����ü ���� ����ü
	//���� ��ü ���� �Ұ�
	gameinfo1.friendGame = &gameinfo2;
	printf("\n\n--- ���� ��ü�� ���� ��� ���� ---\n");
	printf("  ���Ӹ�    : %s\n", gameinfo1.friendGame->name);
	printf("  �߸ų⵵  : %d\n", gameinfo1.friendGame->year);
	printf("  ����      : %d\n", gameinfo1.friendGame->price);
	printf("  ���ۻ�    : %s\n", gameinfo1.friendGame->company);

	//typedef
	//�ڷ����� ���� ����(����ü �̸� ���̱�)
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; // int i = 3;
	�Ǽ� �Ǽ����� = 3.23f; // float f = 3.23f;
	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "�ѱ� ����2";
	game2.year = 2016;



	return 0;
}