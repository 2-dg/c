#include<stdio.h>
#define SIZE 9
void input_dan(int* dan);
void array_dan(int dan, int* gudan);
void print_dan(int dan, int* gudan);
//int num[SIZE];�� ���������� �� ���� ����
int main(void) {
	int gugudan[SIZE] = { 0, };
	int dan = 0, i=1;
	input_dan(&dan);
	array_dan(dan, gugudan);
	print_dan(dan, gugudan);
	return 0;
}
void input_dan(int dan) {
	printf("���ϴ� ���� �Է��Ͻÿ� : ");
	scanf("%d", dan);                               //3������ �����ͷ� �����߱� ������ ���⿡�� �׳� dan���� �޾ƾ���.
}													//dan��ü�� �ּҸ� �ǹ��ϱ� ����
void array_dan(int dan, int* gudan) {
	int i = 0;
	for (i = 1; i < 10; i++) {
		gudan[i] = dan*i;
	}
}
void print_dan(int dan, int* gudan) {
	int i = 0;
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d \n", dan, i, gudan[i]);
	}
}