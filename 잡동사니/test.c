#include<stdio.h>
int num1 = 5;
static int num2 = 10, num3 = 20; //���������� ���������� �����ϸ� �ٸ� �ҽ����Ͽ����� �ܺ������� ���� ����

void add(void) {
	num3 = num1 + num2;
}