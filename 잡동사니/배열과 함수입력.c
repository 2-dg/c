#include<stdio.h>
#define row 4
#define col 3
void input_array(int (*a)[3]);           //(int (*a)[3])  �Լ����𿡴� �迭������ �� �� ����!
void print_array(int (*a)[3]);
void print_1array(int* p);               //�������迭�� �ٲٱ�
int main(void) {
	int array[4][3] = { 0, };
	input_array(array);
	print_array(array);
	print_1array(*array);				//��� 4����Ʈ¥�� ������ ������ ��� ��. ���ü�� ������ϱ� ����
										//*ǥ�ô� ���ü�� ������ ���߰ڴٴ� �ǹ�(*a=a[0])
	return 0;							//*a, a[0], &a[0][0]
}
void input_array(int (*a)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d]�� ���� �Է��Ͻÿ� : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void print_array(int (*a)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] = %d \t", i, j, a[i][j]);
		}
		printf("\n");
	}
}
void print_1array(int* p) {
	int i = 0, j = 0;
	for(j=0;j<(4*3);j++){
		printf("p[%d] = %d \n", j, p[j]);	
	}
}

/*
void input_array(int array[][3]) {
	int i = 0, j = 0, count=1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			a[i][j] = ++count;
		}
	}
}          �ڵ����� 1,2,3,4~�����ϴ� ���
*/