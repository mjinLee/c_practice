#include <stdio.h>

//�Լ� ����
void p(int num);

void function_without_return(); //��ȯ���� ���� �Լ�
int function_with_return(); //��ȯ���� �ִ� �Լ�
void function_without_parameter(); //�Ķ����(���ް�)�� ���� �Լ�
void function_with_parameter(int num1, int num2, int num3); //�Ķ����(���ް�)�� �ִ� �Լ�
int apple(int total, int ate); //�Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
int add(int n1, int n2); //���� �Լ�

int main_function(void) {
	//function
	//����
	/*
	int num =2;
	//printf("num �� %d �Դϴ�\n", num); //2
	p(num); //�Լ� ȣ��

	//2+3��?
	num = num + 3; //num += 3;
	//printf("num �� %d �Դϴ�\n", num); //5
	p(num);

	//5-1��?
	num -= 1; //num = num - 1;
	//printf("num �� %d �Դϴ�\n", num); //4
	p(num);

	//4x3��?
	num *= 3;
	//printf("num �� %d �Դϴ�\n", num); //12
	p(num);

	//12 / 6��?
	num /= 6;
	//printf("num �� %d �Դϴ�\n", num); //2
	p(num);   */


	//�Լ� ����
	//��ȯ���� ���� �Լ�
	function_without_return(); //�Լ� ȣ��

	//��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	//�Ķ����(���ް�)�� ���� �Լ�
	function_without_parameter();

	//�Ķ����(���ް�)�� �ִ� �Լ�
	function_with_parameter(1, 2, 3);

	//�Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	int retu = apple(5, 2); //5���� ��� �߿��� 2���� �Ծ���� ���� �����?
	//printf("��� 5�� �߿��� 2���� ������ %d���� ���ƿ�\n", retu);
	printf("��� %d�� �߿��� %d���� ������ %d���� ���ƿ�\n",
		10, 4, apple(10, 4));


	//���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);


	return 0;
}

//�Լ� ����
void p(int num) {
	printf("num �� %d �Դϴ�\n", num);
}

//��ȯ���� ���� �Լ�
void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}

//��ȯ���� �ִ� �Լ�
int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}

//�Ķ����(���ް�)�� ���� �Լ�
void function_without_parameter() {
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

//�Ķ����(���ް�)�� �ִ� �Լ�
void function_with_parameter(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�\n", 
		num1, num2, num3);
}

//�Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
int apple(int total, int ate) {
	return total - ate;
}

//���� �Լ�
int add(int n1, int n2) {
	return n1 + n2;
}