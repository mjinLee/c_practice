#include <stdio.h>

int main_printfscanf(void) {
	/* printf ����
	printf("Hello World"); */
	
	/*������ ���� ���� 
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age); */

	/*�Ǽ��� ���� ���� 
	float f = 46.5;
	printf("%f\n",f);
	printf("%.2f\n", f); //�Ҽ��� ��°�ڸ����� ǥ��

	double d = 4.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d); //�Ҽ��� ��°�ڸ����� �ݿø�

	printf("%d x %d = %d\n", 3, 7, 3 * 7); */

	/*����� ���� ����
	const int YEAR = 2000; //const: ���ȭ(������ ��ȭ x)
	printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001; */

	/*scanf�Լ� ����
	int input;
	printf("�� �Է�: ");
	scanf_s("%d", &input);
	printf("�Է°�: %d\n", input);

	int one, two, three;
	printf("3���� ���� �Է�: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° ��: %d\n", one);
	printf("�ι�° ��: %d\n", two);
	printf("����° ��: %d\n", three); */

	/*����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����) ����
	char c = 'A'; //����
	printf("%c\n", c);

	char str[256]; //���ڿ�
	scanf_s("%s", str, sizeof(str)); //sizeof():ũ�� ���
	printf("%s\n", str); */

	//������Ʈ
	//�������� ������ ���� �Լ�(���� �ۼ�)
	//�̸�? ����? ������? Ű? ���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ��kg�̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm����? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weight);
	printf("Ű       : %.2lf\n", height);
	printf("����     : %s\n", what);

	return 0;
}