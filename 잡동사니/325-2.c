#include<stdio.h>
void input(int (*p)[3]);
void sum(int p[][3]);
int main(void) {
	int apt[3][3] = { 0, };
	input(apt);
	sum(apt);
	return 0;
}
void input(int (*p)[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d층 %d호의 가족은 몇 명입니까? : ",i+1, j+1);
			scanf("%d", &p[i][j]);
		}
	}
}
void sum(int p[][3]) {
	int i = 0, j = 0, sum = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += p[i][j];
		}
	}
	printf("아파트 총 주민수는 %d입니다. \n", sum);
}