//�Լ��⺻
#include<stdio.h>
int input_num(void);//�Լ�Ÿ�Լ���(�Լ��� �ؿ��� ���� ���� ��)
int main(void) {
	int num = 0, num2 = 0;
	num = input_num();
	printf("�Է��� ���� %d�Դϴ�.\n", num);
	num2 = input_num();
	printf("�Է��� ���� %d�Դϴ�.\n", num2);
return 0;
}
//�Լ� ����
int input_num(void) {
	int num;
	printf("***************\n");
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("***************\n");
	return num;
}