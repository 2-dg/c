#include<stdio.h>
void mul_save(int p[][9]);
int main(void) {
	int mult[9][9] = { 0, };
	mul_save(mult);
	return 0;
}
void mul_save(int p[][9]) {
	int dan = 2, count = 1;
	int i = 0, j = 0;
	for (i = 0; i < 8; i++) {
		count = 1;
		for (j = 0; j < 9; j++) {
			p[i][j] = dan*count;
			printf("mult[%d][%d] = %d * %d = %d \n", i, j, dan, count, p[i][j]);
			count++;
		}
		dan++;
		printf("=======================\n");
	}
}