#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condition(void) {
	
	//버스-학생/일반인으로 구분(일반인:20세)
	/*
	int age = 15;
	if (age >= 20)
		printf("일반인 입니다\n");
	else
		printf("학생 입니다\n");

	//초등학생(8-13)/중학생(14-16)/고등학생(17-19) 교통카드
	int age = 8;
	if (age >= 8 && age <= 13) {
		printf("초등학생 입니다\n");
	}
	else if (age >= 14 && age <= 16)
		printf("중학생 입니다\n");
	else if (age >= 17 && age <= 19)
		printf("고등학생 입니다\n");
	else
		printf("학생이 아닌가봐요\n");

	//break / continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표
	for (int i = 1; i <= 30; i++) {
		if (i >= 6){
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		
		printf("%d 번 학생은 조별발표준비 하세요\n",i);
	}

	//1번부터 30번까지 있는 반에서 7번 결석
	//6번부터 10번까지 조별발표해라 
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d 번 학생은 결석입니다\n", i);
				continue; //바로 i++로 감
			}
			printf("%d 번 학생은 조별발표준비하세요\n", i);
		}
	} 

	//&&(and) ||(or)
	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d) {
		printf("a 와 b, 혹은 c 와 d 의 값이 같습니다\n");
	}
	else
		printf("값이 서로 다르네요\n");

	//가위 바위 보
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 반환
	if (i == 0)
		printf("가위\n");
	else if (i == 1)
		printf("바위\n");
	else if (i == 2)
		printf("보\n");
	else
		printf("몰라요\n");

	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 반환
	switch (i) {
	case 0: printf("가위\n"); break; //i==0이면 switch문 탈출
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰라요 \n"); break;
	}

	//초중고생 교통카드 if문 -> switch case 문으로 바꾸기
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생 입니다\n"); break;
	case 14:
	case 15:
	case 16: printf("중학생 입니다\n"); break;
	case 17:
	case 18:
	case 19: printf("고등학생 입니다\n"); break;
	default: printf("일반인 입니다\n"); break;
	}  */

	//Up and Down 프로젝트
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (1) { // 1 참, 0 거짓
		printf("남은 기회 %d 번\n", chance--); //chance가 하나씩 줄어듦
		printf("숫자를 맞혀보세요 (1-100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다! \n\n");
			break; //정답이면 기회가 몇 번 남았든지 while탈출
		}
		else
			printf("알 수 없는 오류가 발생했어요 \n\n");
		
		if (chance == 0) {
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다\n");
			break;
		}
	}


	return 0;
}