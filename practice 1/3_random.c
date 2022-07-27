#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void) {
	/*random 
	srand(time(NULL)); //난수 초기화
	int num = rand() % 3 + 1; // % 3: 0 ~ 2 / % 3 + 1: 1 ~ 3
	*/
	printf("난수 초기화 이전..\n"); //난수 초기화 안 하면
	for (int i = 0; i < 10; i++)   //계속 똑같은 숫자 나옴
		printf("%d", rand() % 10);
	
	srand(time(NULL)); //난수 초기화
	printf("\n\n난수 초기화 이후..\n"); 
	for (int i = 0; i < 10; i++)   
		printf("%d", rand() % 10);

	return 0;
}