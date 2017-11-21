#include<stdio.h>
void change_array(int(*a)[4], int(*b)[2]);
int main(void) {
	int a[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8};
	int b[4][2] = { 0, };
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d] = %d \t", i, j, a[i][j]);
		}
		printf("\n");
	}
	change_array(a, b);
	printf("\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("b[%d][%d] = %d \t", i, j, b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void change_array(int(*a)[4], int(*b)[2]) {
	int i = 0, j = 0, k = 1;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			b[j][k] = a[i][j];
		}
		k--;
	}
}