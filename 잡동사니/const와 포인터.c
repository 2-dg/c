#include<stdio.h>
int main(void) {
	int b = 20;
	int a = 10;
	int* const p = &a;
	*p = 30;
	//p = &a;�� �� ��
	//�̰� ������p(p�ּ�)�� ���ȭ��Ų ���̱� ������ *p���� 30�� ����
	printf("%d \n", a);
	const int* q = &a;
	q = &b;
	//*q = 30;�� �� ��
	//�̰� �־��� ���� ���ȭ �߱� ������ &a�ּҰ� ���ִ� q�� ���� &b�� �� �� �ִ� ��.
	printf("%d %d %d \n", *q, b, a);
	//�������ȭ
	const int* const m = &a;
	//*m = 30;
	//m = &b;
	//�̷��� �ؾ� �� �� ������ �ȵ�.
	return 0;
}