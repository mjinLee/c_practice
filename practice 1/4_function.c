#include <stdio.h>

//함수 선언
void p(int num);

void function_without_return(); //반환값이 없는 함수
int function_with_return(); //반환값이 있는 함수
void function_without_parameter(); //파라미터(전달값)가 없는 함수
void function_with_parameter(int num1, int num2, int num3); //파라미터(전달값)가 있는 함수
int apple(int total, int ate); //파라미터(전달값)도 받고, 반환값이 있는 함수
int add(int n1, int n2); //계산기 함수

int main_function(void) {
	//function
	//계산기
	/*
	int num =2;
	//printf("num 은 %d 입니다\n", num); //2
	p(num); //함수 호출

	//2+3은?
	num = num + 3; //num += 3;
	//printf("num 은 %d 입니다\n", num); //5
	p(num);

	//5-1은?
	num -= 1; //num = num - 1;
	//printf("num 은 %d 입니다\n", num); //4
	p(num);

	//4x3은?
	num *= 3;
	//printf("num 은 %d 입니다\n", num); //12
	p(num);

	//12 / 6은?
	num /= 6;
	//printf("num 은 %d 입니다\n", num); //2
	p(num);   */


	//함수 종류
	//반환값이 없는 함수
	function_without_return(); //함수 호출

	//반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	//파라미터(전달값)가 없는 함수
	function_without_parameter();

	//파라미터(전달값)가 있는 함수
	function_with_parameter(1, 2, 3);

	//파라미터(전달값)도 받고, 반환값이 있는 함수
	int retu = apple(5, 2); //5개의 사과 중에서 2개를 먹었어요 남은 사과는?
	//printf("사과 5개 중에서 2개를 먹으면 %d개가 남아요\n", retu);
	printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남아요\n",
		10, 4, apple(10, 4));


	//계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);


	return 0;
}

//함수 정의
void p(int num) {
	printf("num 은 %d 입니다\n", num);
}

//반환값이 없는 함수
void function_without_return() {
	printf("반환값이 없는 함수입니다\n");
}

//반환값이 있는 함수
int function_with_return() {
	printf("반환값이 있는 함수입니다\n");
	return 10;
}

//파라미터(전달값)가 없는 함수
void function_without_parameter() {
	printf("전달값이 없는 함수입니다\n");
}

//파라미터(전달값)가 있는 함수
void function_with_parameter(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다\n", 
		num1, num2, num3);
}

//파라미터(전달값)도 받고, 반환값이 있는 함수
int apple(int total, int ate) {
	return total - ate;
}

//계산기 함수
int add(int n1, int n2) {
	return n1 + n2;
}