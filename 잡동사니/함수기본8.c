#include<stdio.h>
int z = 0; //�������� ����
void inform(void);
int input();
int sub(int x, int y);
void sum(int num1, int num2);
int main() {
	int num1 = 0, num2 = 0, result = 0;
	inform();
	num1 = input();
	num2 = input();
	result = sub(num1, num2);
	printf("%d - %d = %d \n",num1, num2, result);
	sum(num1, num2);
	printf("%d + %d = %d \n",num1, num2, z);
	return 0;
}
void inform() {
	printf("--------------\n");
	printf("-���α׷� ����-\n");
	printf("--------------\n");
}
int input() {
	int a;
	printf("������ �Է� : ");
	scanf("%d", &a);
	return a;
}
int sub(int x, int y) {
	int result = 0;
	result = x - y;
	return result;
}
void sum(int num1, int num2){
	z = num1 + num2;
}