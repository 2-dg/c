#include<stdio.h>
void* add(int a, int b);
void* sub(int a, int b);
void* mul(int a, int b);
void* div(int a, int b);
int main(void) {
	int x = 0, y = 0;
	char op = 0;
	void* void_p;
	for (;;) {
		printf("°ª ÀÔ·Â : ");
		scanf("%d %c %d", &x, &op, &y);
		switch (op) {
		case'+': {void_p = add(x, y);
			printf("sum = %d \n", *(int *)void_p);
			break; }
		case'-': {void_p = sub(x, y);
			printf("sum = %d \n", *(int *)void_p);
			break; }
		case'*': {void_p = mul(x, y);
			printf("sum = %d \n", *(int *)void_p);
			break; }
		case'/': {void_p = div(x, y);
			printf("sum = %d \n", *(int *)void_p);
			break; }
		}
	}
	return 0;
}
void* add(int a, int b) {
	static int sum = 0;
	sum = a + b;
	return &sum;
}
void* sub(int a, int b) {
	static int sum = 0;
	sum = a - b;
	return &sum;
}
void* mul(int a, int b) {
	static int sum = 0;
	sum = a * b;
	return &sum;
}
void* div(int a, int b) {
	static int sum = 0;
	sum = a / b;
	return &sum;
}