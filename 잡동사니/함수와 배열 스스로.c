#include<stdio.h>
#define SIZE 10
void input_score(int* score);
int sum_score(int* score);
double avg_score(int sum);
int main(void) {
	int score[SIZE] = { 0, };
	int sum = 0;
	double avg = 0;
	input_score(score);
	sum = sum_score(score);
	avg = avg_score(sum);
	printf("������ �հ�� %d, ����� %lf�Դϴ�.\n", sum, avg);
}
void input_score(int* score) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &score[i]);
	}
}
int sum_score(int* score) {
	int i = 0, sum = 0;
	for (i = 0; i < SIZE; i++) {
		sum += score[i];
	}
	return sum;
}
double avg_score(int sum) {
	return ((double)(sum / SIZE));
}