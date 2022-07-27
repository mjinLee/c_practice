#include <stdio.h>

int main_loop(void) {
	
	/* ++ 
	int a = 10;
	printf("a 는 %d\n", a);
	a++; //a = a + 1
	printf("a 는 %d\n", a);

	int b = 20;
	printf("b 는 %d\n", ++b); //++먼저 하고 문장 끝내라
	printf("b 는 %d\n", b++); //문장을 수행하고 나서 다음 줄로 넘어갈 때 ++해라
	printf("b 는 %d\n", b); */
	
	/*반복문
	//for, while, do while
	//for(선언, 조건, 증감)
	for (int i = 1; i <= 10; i++) {
		printf("hello world %d\n", i);
	}

	//while(조건)
	int i = 1;
	while (i <= 10) {
		printf("hello world %d\n", i++);
		//i++;
	}

	//do{ } while(조건)
	int i = 1;
	do {
		printf("hello world %d\n", i++);
	} while (i <= 10);

	//2중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문:  %d\n", i);
		
		for (int j = 1; j <= 5; j++) {
			printf("   두 번째 반복문 %d\n", j);
		}
	}

	//구구단
	//2단부터 9단까지 출력
	for (int i = 2; i <= 9; i++) {
		printf("%d 단 계산\n",i);
		for (int j = 1; j <= 9; j++) {
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}  */

	/*
	*
	**
	***
	****
	*****
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j<=i ; j++) {
			printf("*");
		}
		printf("\n");
	} */

	/*
	SSSS*
	SSS**
	SS***
	S****
	*****
	
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5- 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	} */

	//피라미드를 쌓아라 프로젝트
	/*
	 SS*
	 S***
	 *****
	 */
	int floor;
	printf("몇 층으로 쌓겠는가? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}