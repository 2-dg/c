//�Լ��⺻
#include<stdio.h>
int sum(void);//�Լ�Ÿ�Լ���(�Լ��� �ؿ��� ���� ���� ��)
int main(void) {
	int answer = 0;

	answer = sum();

	printf("%d \n", answer);

	return 0;
}
//�Լ� ����
int sum(void) {
	int a = 0, b = 0, num=0;

	printf("�Է°� 1: ");
	scanf("%d", &a);
	printf("�Է°� 2: ");
	scanf("%d", &b);

	num = a + b;
	return num;
}