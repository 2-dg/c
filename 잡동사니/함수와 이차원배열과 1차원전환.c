#include<stdio.h>
void input(int(*a)[2]);
void print(int(*a)[2]);
void array1(int* a);					//���ü �ϳ� ���� ��. ���� ���ȣ�� ���ּ�.
int main(void) {
	int a[2][2] = { 0, };
	input(a);
	print(a);
	array1(a);
	return 0;
}
void input(int(*a)[2]) {
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("p[%d][%d]���� �Է� : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void print(int(*a)[2]) {
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("p[%d][%d]�� : %d \n", i, j, a[i][j]);
		}
	}
}
void array1(int* a) {
	int i = 0, j = 0;
	for(i=0;i<2*2;i++){
		printf("a[%d] = %d \n", i, a[i]);
	}
}