#include<stdio.h>
int main(void) {
	extern int num1;
	extern int num2;
	extern int num3;

	printf("num1의 값 : %d \n", num1);
	printf("num2의 값 : %d \n", num2);
	printf("num3의 값 : %d \n", num3);
	return 0;
}