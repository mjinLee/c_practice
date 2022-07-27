#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 비밀번호를 입력 받아서
// 맞는 경우 ? 비밀 일기를 읽어와서 보여주고, 계속 작성하도록 함
// 틀린 경우 ? 경고 메시지를 표시하고 종료

#define MAX 10000

int main(void) {
	//fgets, fputs 활용
	char line[MAX]; // 파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; // 일기장에 입력할 내용
	char password[MAX]; // 비밀번호 입력
	char c; // 비밀번호 입력할 때 키값 확인용 (마스킹)

	printf("'비밀일기'에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	int i = 0;
	while (1) {
		c = getch(); // 키 입력 시 바로 동작
		if (c == 13) { // Enter -> 비밀번호 입력 종료
			password[i] = '\0';
			break;
		}
		else { // 비밀번호 입력 중
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호 : 코딩코딩 zheldzheld
	printf("\n\n === 비밀번호 확인 중.. === \n\n");
	if (strcmp(password, "zheldzheld") == 0) { // 비밀번호 일치
		printf("=== 비밀번호 확인 완료 === \n\n");
		char* fileName = "c:\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b");
		// 파일이 없으면 생성, 파일 있으면 append.(뒤에서부터 내용 추가)
		if (file == NULL) {
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요 ! 종료하려면 EXIT를 입력하세요\n\n");
		while (1) {
			scanf("%[^\n]", contents); 
			// 줄바꿈(\n)이 나오기 전까지 모든 문자열을 다 contents에 집어넣어라
			getchar(); // Enter 입력(\n) Flush 처리

			if (strcmp(contents, "EXIT") == 0) {
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			
			fputs(contents, file);
			fputs("\n", file);
			// Enter를 위에서 무시 처리하였으니 임의로 추가
		}
		fclose(file);
	}
	else { // 비밀번호가 틀린 경우
		printf("=== 비밀번호가 틀렸어요 ===\n\n");
		printf("경고 ! 접근을 허용하지 않습니다!!\n\n\n");
	}

	return 0;
}