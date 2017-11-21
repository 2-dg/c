//함수기본
#include<stdio.h>
int input_num(void);//함수타입선언(함수를 밑에다 쓰고 싶을 때)
int main(void) {
	int num = 0, num2 = 0;
	num = input_num();
	printf("입력한 값은 %d입니다.\n", num);
	num2 = input_num();
	printf("입력한 값은 %d입니다.\n", num2);
return 0;
}
//함수 정의
int input_num(void) {
	int num;
	printf("***************\n");
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("***************\n");
	return num;
}