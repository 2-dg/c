//430-1
#include<stdio.h>
int sum_array(int* a);
int index; //�迭�������� ��������
int main(void) {
	int a[] = { 10,20,30,40,50 };
	int sum = 0;
	index = sizeof(a) / sizeof(a[0]); //�迭�� ���� 5, ���������� ����
	sum = sum_array(a);
	printf("\n%d\n", sum);
	return 0;
}
int sum_array(int* a) {
	int i = 0, sum = 0;
	for (i = 0; i < index ; i++) {
		sum += a[i];
		printf("%d\t", a[i]);
	}
	return sum;
}