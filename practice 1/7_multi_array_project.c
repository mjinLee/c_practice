#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//10마리의 서로 다른 동물 (각 카드 2장씩)
//사용자로부터 2개의 입력 값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
//모든 동물 쌍을 찾으면 게임 종료
//총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 (20장의 카드)
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인
char* strAnimal[10]; // 동물 이름을 가진 주소를 가져오겠다

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals(); // 동물 위치 출력
void printQuestion(); // 문제 출력 (카드 지도)
int foundAllAnimals();

int main_multi_array_project(void) {
	srand(time(NULL));

	initAnimalArray(); //초기화
	initAnimalName();

	shuffleAnimal(); //동물이름 채우기

	int failCount = 0; //실패 횟수

	while (1) {
		int select1 = 0; // 사용자가 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두 번째 수

		printAnimals(); // 동물 위치 출력
		printQuestion(); // 문제 출력 (카드 지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) // 같은 카드 선택 시 무효
			continue;

		//좌표에 해당하는 카드를 뒤집어 보고 같은지 안 같은지 확인

		//정수 좌표를 (x,y)로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 같은 동물인 경우
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0		// 카드가 뒤집히지 않았는지
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0)

			&&

			(arrayAnimal[firstSelect_x][firstSelect_y]
				== arrayAnimal[secondSelect_x][secondSelect_y]))	// 두 동물이 같은지
		{
			printf("\n\n 빙고 ! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}	
		// 다른 동물인 경우
		else {
			printf("\n\n 땡 ! (틀려거나, 이미 뒤집힌 카드입니다)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// 모든 동물을 찾았는지 여부 : 1(참), 0(거짓)
		if (foundAllAnimals() == 1) {
			printf("\n\n 축하합니다 ! 모든 동물을 다 찾았네요 \n");
			printf("지금까지 총 %d 번 실수하였습니다\n", failCount);
			break;
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1; //-1로 초기화 : 비어있음
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "고양이";
	strAnimal[1] = "강아지";
	strAnimal[2] = "기린";
	strAnimal[3] = "호랑이";
	strAnimal[4] = "코끼리";
	strAnimal[5] = "낙타";
	strAnimal[6] = "사자";
	strAnimal[7] = "표범";
	strAnimal[8] = "타조";
	strAnimal[9] = "하마";
}

void shuffleAnimal() {
	//arrayAnimal[4][5]의 빈공간을 찾아서 A동물이름 넣고
	//또 빈공간 찾아서 A동물이름 넣고를 10번 반복하고 나면,
	//한번 할 때마다 2번씩, 총 10번 다하고나면 다 채워지겠지
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition(); //비어있는 위치를 알려줘
			int x = conv_pos_x(pos); //반환된 값을 x로 변경해줌 convert position x
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i; //찾은 빈자리에 똑같은 i(동물이름)이 들어갈 것
		}
	}
}

//좌표에서 빈공간 찾기
int getEmptyPosition() {
	//□□□□□   0  1  2  3  4  ->나누기 5: 0 0 0 0 0
	//□□□□□   5  6  7  8  9			  1 1 1 1 1
	//□□□□□  10 11 12 13 14		  	  2 2 2 2 2
	//□□□□□  15 16 17 18 19			  3 3 3 3 3
		
	while (1) {
		int randPos = rand() % 20; //0-19 사이의 숫자 반환
		// 19 -> (3,4)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) {
			return randPos; //비어있으면 위치를 반환해줘
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	// 19 -> (3,4)
	return x / 5;
}

int conv_pos_y(int y) {
	// 19 -> 19 / 5 ? 몫은 3, 나머지 4
	return y % 5; // y를 5로 나눈 나머지 값
}

// 동물 위치 출력
void printAnimals() {
	//정답 확인용 출력
	printf("\n==== 이건 비밀인데.. 몰래 보여줍니다 ====\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[arrayAnimal[i][j]]); // %8s : 8칸 확보하고 출력
		}
		printf("\n");
	}
	printf("\n==============================\n\n");
}

// 문제 출력 (카드 지도)
void printQuestion() {
	printf("\n\n(문제)\n");
	int seq = 0;
					// seq				// checkAnimal
	//□□□□□   0  1  2  3  4			0 0 0 0 0
	//□□□□□  하마  6  7  8  9			1 0 0 0 0
	//□□□□□  10 11 12 하마 14			0 0 0 1 0
	//□□□□□  15 16 17 18 19			0 0 0 0 0

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// 카드를 뒤집어서 정답을 맞혔으면 동물 이름
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// 아직 뒤집지 못했으면 (정답을 못맞혔으면) 뒷면 ->위치를 나타내는 숫자
			else {
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals() { // 1을 반환하기 위해 int
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				//아직 뒤집히지 않은 카드가 있다
				return 0;
			}
		}
	}
	return 1; // 모두 다 찾음
}