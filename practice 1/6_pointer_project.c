/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//물고기 6마리
// //어항에 살고 있는데, 사막이다
//사막이 너무 덥고 건조해서 물이 아주 빨리 증발
//물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려야
//물고기는 시간이 지날수록 점점 커짐 나중에는 냠냠?

int level;
int arrayFish[6];
int* cursor; //arrayFish를 가리키면서, 어항에 찾아가서 물주는 역할

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void) {
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; //총 경과 시간
	long prevElapsedTime = 0; //직전 경과 시간 (최근에 물을 준 시간 간격)

	int num; //몇 번 어항에 물을 줄 것인지 사용자가 입력
	initData();

	cursor = arrayFish; // cursor[0]..cursor[1]

	startTime = clock(); //현재 시간을 millisecond (1000분의 1초) 단위로 반환

	while (1) {
		printfFishes(); //물고기들의 어항 상태
		//getchar(); //임시로 사용자 입력 대기
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num>6) {
			printf("\n입력값이 잘못되었습니다\n");
			continue;
		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //초단위로 표시
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		//직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		//어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0 이면? 물을 주지 않는다. 이미 물고기 죽음
		if (cursor[num - 1] <= 0)
			printf("%d 번 물고기는 이미 죽었습니다. 물을 주지 않습니다\n", num);
		//2. 어항의 물이 0 이 아닌 경우? 물을 준다 
		// 100을 넘지 않는지 체크 -> (현재 어항의 물 +1 <= 100)
		else if (cursor[num - 1] + 1 <= 100) {
			//물을 준다
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1; //cursor[num - 1] = cursor[num - 1] + 1
		}
			
		//레벨업을 할 건지 확인 (레벨업은 20초마다 한 번씩 수행)
		if (totalElapsedTime / 20 > level - 1) {
			//레벨업
			level++; //level : 1 -> level : 2 -> level : 3..
			printf("*** 축 레벨업 ! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n",
				level - 1, level);

			//최종 레벨 5
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다\n\n");
				exit(0);
			}
		}
		
		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0) {
			//물고기 모두 죽음
			printf("모든 물고기가 죽었습니다\n");
			exit(0);
		}
		else {
			//최소 한 마리 이상의 물고기는 살아 있음
			printf("물고기가 아직 살아 있어요 !\n");
		}
		
		prevElapsedTime = totalElapsedTime;
		//10초 -> 15초 (5초 : preElapsedTime -> 15초) -> 25초 (10초..?)
		//계속 진행하게 하는 장치
	}

	return 0;
}

void initData() {
	level = 1; //게임 레벨 (1-5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; //어향의 물 높이 (0-100)
	}
}

void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	//6개의 어항의 물을 모두 증발시켜야
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 : 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
			arrayFish[i] = 0;
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0)
			return 1; // 참 True
	}
	return 0;
}

*/