#include<stdio.h>
void print_array(int a[][2]); //(*a)[2] : 대상체 맞추기. =int *p (1차원으로 차수를 낮춰서 계산 빠르게)
int main(void) {
	int a[2][2] = { 10,20,30,40 };
	int i=0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d] = %d \n", i, j, a[i][j]);
		}
	}
	print_array(a);


	return 0;
}
void print_array(int a[][2]){
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d] = %d \n", i, j, a[i][j]);
		}
	}
}