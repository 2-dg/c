#include<stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);
int main(void) {
	int x = 0, z = 0;
	char c = 0;
	void(*pointer)(int, int);
	printf("add함수의 주소 : %x \n", add);
	printf("subtract함수의 주소 : %x \n", subtract);
	printf("입력 : ");
	scanf("%d %c %d", &x, &c, &z);

	if (c == '+') {
		pointer = add;
	}else if (c=='-') {
		pointer = subtract;
	}else {
		printf("두 번째 연산자는 '+'또는 '-'를 입력하세요. \n");
	}
	pointer(x, z);

	return 0;
}
void add(int num1, int num2)
{
	int result = 0;
	result = num1 + num2;
	printf("%d + %d = %d입니다. \n", num1, num2, result);
}
void subtract(int num1, int num2) {
	int result = 0;
	result = num1 - num2;
	printf("%d - %d = %d입니다. \n", num1, num2, result);
}