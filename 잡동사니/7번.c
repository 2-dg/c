#include<stdio.h>
void input_nums(int(*p)[10]);
void qa(int(*p)[10]);
int main(void) {
	int a[3][10] = { 0 };
	input_nums(a);
	qa(a);
}
void input_nums(int(*p)[10]) {
	int i = 0, count = 1;
	for (i = 0; i < 10; i++) {
		p[0][i] = count++;
		printf("%d \t", p[0][i]);
	}printf("\n");
	count = 1;
	for (i = 0; i < 10; i++) {
		p[1][i] = count* count;
		count++;
		printf("%d \t", p[1][i]);
	}printf("\n");
	count = 1;
	for (i = 0; i < 10; i++) {
		p[2][i] = count*count*count;
		count++;
		printf("%d \t", p[2][i]);
	}printf("\n");
}
void qa(int(*p)[10]) {
	int user = 0, i=0, j=0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &user);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 10; j++) {
			if (user == p[i][j]) {
				printf("%d의 세제곱근은 %d", user, p[0][j]);
			}
		}
	}
}