#include <stdio.h>

int main_array(void) {
	//�迭
	//���� ���� ������ �Բ�, ���ÿ� ����
	/*
	int subway_array[3]; //[0] [1] [2]
	subway_array[0] = 30; //�迭�� 0���� ����
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d ���� Ÿ�� �ִ�\n", i + 1, subway_array[i]);
	} */

	/*�� ���� ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //���� �ݵ�� �ʱ�ȭ�ؾ� ��
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	} */

	/*�迭 ũ��� �׻� ����� ����
	int size = 10;
	int arr[10]; */

	/*
	int arr[10] = { 1,2 }; //3��° �����ʹ� �ڵ����� 0���� �ʱ�ȭ��
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	} */

	//int arr[] = { 1,2 }; //arr[2];

	/*
	float arr[15] = { 1.0f, 2.0f,3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr[i]);
	} */

	/*���� vs ���ڿ�
	char c = 'A';
	printf("%c\n", c);

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL���� '\0'�� ���ԵǾ�� ��
	char str[7] = "coding"; //[c] [o] [d] [i] [n] [g] [\0]
	printf("%s\n", str); */

	/*
	char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	} */

	/*
	char kor[] = "ȭ���Ϲ�"; // �� ���ڴ� 2 byte = 8 byte + \0 = 9 byte
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//���� 1���� : 1 byte
	//�ѱ� 1���� : 2 byte
	//char ũ�� : 1 byte */

	/*
	char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]); // ASCII �ڵ� ��. null ���ڰ��� 0���� �Էµ�
	}  */

	/*���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name); */

	/*����. ASCII �ڵ�? ANSI (�̱�ǥ����ȸ)���� ������ ǥ�� �ڵ� ü��
	  7bit, �� 128 �� �ڵ� (0-127)
	  a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
	  A : 65
	  0 : 48 
	printf("%c\n", 'a');
	printf("%d\n", 'a'); //�ƽ�Ű�ڵ� */

	/*����2. 0-127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��*/
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}

	return 0;
}