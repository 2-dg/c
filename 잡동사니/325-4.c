#include<stdio.h>
void input_array(int(*p)[3]);
void minus_array(int x[][3], int y[][3]);
void plus_array(int x[][3], int y[][3]);
int main(void) {
	int a[4][3] = { 0, };
	int b[4][3] = { 0, };
	printf("a¹è¿­\n");
	input_array(a);
	printf("b¹è¿­\n");
	input_array(b);
	minus_array(a, b);
	plus_array(a, b);
	return 0;
}
void input_array(int(*p)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("[%d][%d]ÀÇ °ª ÀÔ·Â : ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
}
void minus_array(int x[][3], int y[][3]) {
	int i = 0, j = 0;
	int result = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			result = x[i][j] - y[i][j];
			printf("[%d][%d]³¢¸®ÀÇ »¬¼ÀÀº = %d \n", i, j, result);
		}
	}
}
void plus_array(int x[][3], int y[][3]) {
	int i = 0, j = 0;
	int result = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			result = x[i][j] + y[i][j];
			printf("[%d][%d]³¢¸®ÀÇ µ¡¼ÀÀº = %d \n", i, j, result);
		}
	}
}