#include<stdio.h>
int num1 = 5;
static int num2 = 10, num3 = 20; //정적변수로 전역변수를 선언하면 다른 소스파일에서는 외부참조를 하지 못함

void add(void) {
	num3 = num1 + num2;
}