#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void) {
	/*random 
	srand(time(NULL)); //���� �ʱ�ȭ
	int num = rand() % 3 + 1; // % 3: 0 ~ 2 / % 3 + 1: 1 ~ 3
	*/
	printf("���� �ʱ�ȭ ����..\n"); //���� �ʱ�ȭ �� �ϸ�
	for (int i = 0; i < 10; i++)   //��� �Ȱ��� ���� ����
		printf("%d", rand() % 10);
	
	srand(time(NULL)); //���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ ����..\n"); 
	for (int i = 0; i < 10; i++)   
		printf("%d", rand() % 10);

	return 0;
}