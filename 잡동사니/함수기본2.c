//함수기본
#include<stdio.h>
int sum(void);//함수타입선언(함수를 밑에다 쓰고 싶을 때)
int main(void) {
	int answer = 0;

	answer = sum();

	printf("%d \n", answer);

	return 0;
}
//함수 정의
int sum(void) {
	int a = 0, b = 0, num=0;

	printf("입력값 1: ");
	scanf("%d", &a);
	printf("입력값 2: ");
	scanf("%d", &b);

	num = a + b;
	return num;
}