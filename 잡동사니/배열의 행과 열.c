#include<stdio.h>
int main(void) {
	int a[3][2] = { 1,2,3,4,5,6 };
	int count = sizeof(a) / sizeof(a[0][0]);		//��ü ������ �ּҴ���
	int mol = sizeof(a[0]);							//1���� a���� ������ (������� ������)
	int mol2 = sizeof(*a);
	int mol3 = sizeof(*a[0]);						//	
	int col = sizeof(a) / sizeof(a[0]);				//��ü ������ ��
	int row = sizeof(a[0]) / sizeof(a[0][0]);		//�� ������ �ּҴ���
	printf("ĭ�� = %d, �� =  %d, �� =  %d \n", count, col, row);
	printf("sizeof(a[0]) = %d (8����Ʈ¥�� ������ ��������̱� ������) \n", mol);
	printf("sizeof(*a) = %d (8����Ʈ¥�� ������ ��������̱� ������) \n", mol2);
	printf("sizeof(*a[0]) = %d (8����Ʈ¥�� ������ ��������̱� ������) \n", mol3);
	printf("%d %d %d %d \n", *a[0], *a[0] + 1, (*a)[0], *(*a)+1 );
	printf("%d %d %d %d \n", *a[1], *a[1] + 1, (*a[1])+0, (*a)[2] + 1);
}