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
			printf("%d�� %dȣ�� ������ �� ���Դϱ�? : ",i+1, j+1);
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
	printf("����Ʈ �� �ֹμ��� %d�Դϴ�. \n", sum);
}