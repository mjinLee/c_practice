#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArray(int* ptr);
int main_pointer(void) {
	//������

	/*
	// [ö��] : 101ȣ ->�޸� ������ �ּ�
	// [����] : 201ȣ
	// [�μ�] : 301ȣ
	//  �� �� �տ� '��ȣ'�� �ɷ� ����
	int ö�� = 1; //��ȣ
	int ���� = 2;
	int �μ� = 3;

	printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��); //&ö�� : ö���� �ּ�
	 
	//�̼Ǹ�
	//ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	int* �̼Ǹ�; //������ ����
	�̼Ǹ� = &ö��;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : % d, ��ȣ : % d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &����;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : % d, ��ȣ : % d\n", �̼Ǹ�, *�̼Ǹ�);

	//�� ��° �̼� : �� ��ȣ�� 3�� ���ض�
	�̼Ǹ� = &ö��; //���� &���� ������ �ٽ� &ö����
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : % d, ��ȣ : % d\n", �̼Ǹ�, *�̼Ǹ�);
	
	//������
	//�̼Ǹ��� �ٲ� ��ȣ���� 2�� ����
	int* ������ = �̼Ǹ�; //�����̿� �̼Ǹ� ��� ����Ʈ �ּҸ� ����Ű�� ����
	printf("\n  ...�����̰� �̼� �����ϴ� ��...   \n\n");
	������ = &ö��;
	*������ = *������ - 2; // ö�� = ö�� - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : % d, ��ȣ : % d\n", ������, *������);

	printf("\n ...ö�� ���� �μ��� ���� ���� �ٲ� ��ȣ�� ���� ����... \n\n");

	printf("ö���� �ּ� : % d, ��ȣ : % d\n", &ö��, ö��);
	printf("����� �ּ� : % d, ��ȣ : % d\n", &����, ����);
	printf("�μ��� �ּ� : % d, ��ȣ : % d\n", &�μ�, �μ�);

	//����� �̼Ǹ��� ��� ���� �ּҴ� &�̼Ǹ����� Ȯ��
	printf("�̼Ǹ��� �ּ� : % d\n", &�̼Ǹ�);
	printf("�������� �ּ� : % d\n", &������); */

	/*
	//�迭 ?
	int arr[3] = { 5,10,15 };
	int* ptr = arr; //������ ����
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++) {
		//printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d] �� �� : %d\n", i, *(arr + i)); //arr : arr�� �ּҰ�
		// *(arr+i) : arr�� �ּҷκ��� i ��°�� �ش��ϴ� ��(*)�� �����´�
	}
	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
	}
	// *(arr + i) == arr[i] �Ȱ��� ǥ��
	// arr == arr �迭�� ù ��° ���� �ּҿ� ���� == &arr[0]
	printf("arr ��ü�� �� : %d\n", arr);
	printf("arr[0] �� �ּ� : %d\n", &arr[0]);

	printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // *(arr + 0)
	printf("arr[0] �� ���� �� : %d\n", *&arr[0]); //arr[0] */

	/*SWAP
	int a = 10;
	int b = 20;
	// a �� b �� ���� �ٲ۴�
	printf("SWAP �Լ� �� => a : %d, b : %d\n", a, b);
	swap(a, b); 
	printf("SWAP �Լ� �� => a : %d, b : %d\n", a, b);
	//���� ���� ����( call by value) : ���� �����Ѵٴ� �ǹ�

	//�ּ� ���� �ѱ�� ?  �޸� ������ �ִ� �ּҰ� ��ü�� �ѱ��.. ö����ó��
	printf("(�ּҰ� ����)SWAP �Լ� �� => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b); //�ּҰ� ����
	printf("(�ּҰ� ����)SWAP �Լ� �� => a : %d, b : %d\n", a, b); */

	/*�迭�� ��, arr2 -> �ּ�*/
	int arr2[3] = { 10,20,30 };
	//changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;
}

void swap(int a, int b) {
	printf("(swap �Լ� ��) a�� �ּ�: %d\n", &a);
	printf("(swap �Լ� ��) b�� �ּ�: %d\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("SWAP �Լ� �� => a : %d, b : %d\n", a, b);
}

void swap_addr(int * a, int * b) {
	
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ� ����)SWAP �Լ� �� => a : %d, b : %d\n", *a, *b);
}


void changeArray(int* ptr) {
	ptr[2] = 50;
}