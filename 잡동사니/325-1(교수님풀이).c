#include<stdio.h>
#define ROW1 2
#define COL1 4
#define ROW2 4
#define COL2 2
void change_array(int(*a1)[4], int(*a2)[2]);
void print_array(int(*a1)[4], int(*a2)[2]);
int main(void) {
	int a1[ROW1][COL1] = { {1,2,3,4,},{5,6,7,8} };
	int a2[ROW2][COL2] = { 0, };
	change_array(a1, a2);
	print_array(a1, a2);
	return 0;
}
void change_array(int(*a1)[4], int(*a2)[2]) {
	int i = 0, j = 0;
	for (i = 0; i < ROW1; i++) {
		for (j = 0; j < COL1; j++) {
			a2[j][1 - i] = a1[i][j];
		}
	}
}
void print_array(int(*a1)[4], int(*a2)[2]) {
	int i = 0, j = 0;
	for (i = 0; i < ROW1; i++) {
		for (j = 0; j < COL1; j++) {
			printf("a1[%d][%d] = %d \t", i, j, a1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < ROW2; i++) {
		for (j = 0; j < COL2; j++) {
			printf("a2[%d][%d] = %d \t", i, j, a2[i][j]);
		}
		printf("\n");
	}
}