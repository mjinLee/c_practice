#include <stdio.h>

int main_printfscanf(void) {
	/* printf 예제
	printf("Hello World"); */
	
	/*정수형 변수 예제 
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age); */

	/*실수형 변수 예제 
	float f = 46.5;
	printf("%f\n",f);
	printf("%.2f\n", f); //소수점 둘째자리까지 표시

	double d = 4.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d); //소수점 둘째자리까지 반올림

	printf("%d x %d = %d\n", 3, 7, 3 * 7); */

	/*상수형 변수 예제
	const int YEAR = 2000; //const: 상수화(변수값 변화 x)
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001; */

	/*scanf함수 예제
	int input;
	printf("값 입력: ");
	scanf_s("%d", &input);
	printf("입력값: %d\n", input);

	int one, two, three;
	printf("3개의 정수 입력: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값: %d\n", one);
	printf("두번째 값: %d\n", two);
	printf("세번째 값: %d\n", three); */

	/*문자(한 글자), 문자열(한 글자 이상의 여러 글자) 예제
	char c = 'A'; //문자
	printf("%c\n", c);

	char str[256]; //문자열
	scanf_s("%s", str, sizeof(str)); //sizeof():크기 명시
	printf("%s\n", str); */

	//프로젝트
	//경찰관이 범죄자 정보 입수(조서 작성)
	//이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름     : %s\n", name);
	printf("나이     : %d\n", age);
	printf("몸무게   : %.2f\n", weight);
	printf("키       : %.2lf\n", height);
	printf("범죄     : %s\n", what);

	return 0;
}