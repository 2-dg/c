#include<stdio.h>
double input();
void output(double x, double y);
void information();
int main(void) {
	double num1 = 0.0, num2 = 0.0;
	information();
	num1 = input();
	num2 = input();
	output(num1, num2);
	return 0;
}
double input() {
	double num = 0;
	static int count = 1;
	printf("%d��° �Ǽ� �Է� : ", count++);
	scanf("%lf", &num);
	return num;
}
void output(double x, double y) {
	double result;
	result = x / y;
	printf("�Էµ� �� : %lf, %lf \n", x, y);
	printf("���� �� : %lf \n", result);
}
void information() {
	printf("---���α׷� ����---\n");
}