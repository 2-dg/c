/*
1. �ΰ� �� �Է¹޴´�.
2. ���� ū �� ���Ѵ�.
*/
#include<stdio.h>
int input_num(void);
int max_value(int num1, int num2);
int main(void) {
	int num1 = 0, num2 = 0, max=0;

	num1 = input_num();
	num2 = input_num();
	max = max_value(num1, num2);
	printf("�� ���� ū ���� %d�̴�.\n", max);
	return 0;
}
int input_num(void) {
	int num1 = 0;
	printf("������ �Է� : ");
	scanf("%d", &num1);
	return num1;
}
int max_value(int num1, int num2) {
	int max = 0;
	max = (num1 > num2) ? num1 : num2;
	return max;
}