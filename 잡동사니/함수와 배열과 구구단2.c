#include<stdio.h>
#define SIZE 9
int input_dan(void);
void array_dan(int dan, int* gudan);
void print_dan(int dan, int* gudan);
//int num[SIZE];�� ���������� �� ���� ����
int main(void) {
	int gugudan[SIZE] = { 0, };
	int dan = 0, i = 1;
	dan=input_dan();
	array_dan(dan, gugudan);
	print_dan(dan, gugudan);
	return 0;
}
int input_dan(void) {
	int dan = 0;
	printf("���ϴ� ���� �Է��Ͻÿ� : ");
	scanf("%d", &dan); return dan;                  //3������ �����ͷ� �����߱� ������ ���⿡�� �׳� dan���� �޾ƾ���.
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